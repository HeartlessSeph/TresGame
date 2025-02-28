// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ScaleformUI_StructsAndEnums.h"
#include "SwfMovie.generated.h"

/**
 * 
 */
UCLASS()
class SCALEFORMUI_API USwfMovie : public UObject
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SwfMovie")
	bool bUseGFxExport;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SwfMovie")
	bool bOptimizeForMobiles;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SwfMovie")
	bool bSetSRGBOnImportedTextures;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SwfMovie")
	bool bPackTextures;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SwfMovie")
	int PackTextureSize;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SwfMovie")
	bool bForceSquarePacking;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SwfMovie")
	TEnumAsByte<EFlashTextureRescale> TextureRescale;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SwfMovie")
	FString TextureFormat;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SwfMovie")
	bool bReplaceImages;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SwfMovie")
	FString SourceFile;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SwfMovie")
	TArray<FString> FontMappings;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SwfMovie")
	FString SourceFileTimestamp;

	uint64_t ImportTimeStamp;

	//UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SwfMovie")
	//TArray<unsigned char> RawData;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SwfMovie")
	TArray<FString> ReferencedAssetNames;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SwfMovie")
	TArray<class UObject*> References;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SwfMovie")
	TArray<class UObject*> UserReferences;
};

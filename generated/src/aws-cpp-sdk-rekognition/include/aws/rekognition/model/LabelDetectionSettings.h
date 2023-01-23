/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rekognition/Rekognition_EXPORTS.h>
#include <aws/rekognition/model/GeneralLabelsSettings.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace Rekognition
{
namespace Model
{

  /**
   * <p>Contains the specified filters that should be applied to a list of returned
   * GENERAL_LABELS.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/rekognition-2016-06-27/LabelDetectionSettings">AWS
   * API Reference</a></p>
   */
  class LabelDetectionSettings
  {
  public:
    AWS_REKOGNITION_API LabelDetectionSettings();
    AWS_REKOGNITION_API LabelDetectionSettings(Aws::Utils::Json::JsonView jsonValue);
    AWS_REKOGNITION_API LabelDetectionSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_REKOGNITION_API Aws::Utils::Json::JsonValue Jsonize() const;


    
    inline const GeneralLabelsSettings& GetGeneralLabels() const{ return m_generalLabels; }

    
    inline bool GeneralLabelsHasBeenSet() const { return m_generalLabelsHasBeenSet; }

    
    inline void SetGeneralLabels(const GeneralLabelsSettings& value) { m_generalLabelsHasBeenSet = true; m_generalLabels = value; }

    
    inline void SetGeneralLabels(GeneralLabelsSettings&& value) { m_generalLabelsHasBeenSet = true; m_generalLabels = std::move(value); }

    
    inline LabelDetectionSettings& WithGeneralLabels(const GeneralLabelsSettings& value) { SetGeneralLabels(value); return *this;}

    
    inline LabelDetectionSettings& WithGeneralLabels(GeneralLabelsSettings&& value) { SetGeneralLabels(std::move(value)); return *this;}

  private:

    GeneralLabelsSettings m_generalLabels;
    bool m_generalLabelsHasBeenSet = false;
  };

} // namespace Model
} // namespace Rekognition
} // namespace Aws

/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/textract/Textract_EXPORTS.h>
#include <aws/textract/model/AnalyzeIDDetections.h>
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
namespace Textract
{
namespace Model
{

  /**
   * <p>Structure containing both the normalized type of the extracted information
   * and the text associated with it. These are extracted as Type and Value
   * respectively.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/textract-2018-06-27/IdentityDocumentField">AWS
   * API Reference</a></p>
   */
  class IdentityDocumentField
  {
  public:
    AWS_TEXTRACT_API IdentityDocumentField();
    AWS_TEXTRACT_API IdentityDocumentField(Aws::Utils::Json::JsonView jsonValue);
    AWS_TEXTRACT_API IdentityDocumentField& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_TEXTRACT_API Aws::Utils::Json::JsonValue Jsonize() const;


    
    inline const AnalyzeIDDetections& GetType() const{ return m_type; }

    
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    
    inline void SetType(const AnalyzeIDDetections& value) { m_typeHasBeenSet = true; m_type = value; }

    
    inline void SetType(AnalyzeIDDetections&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    
    inline IdentityDocumentField& WithType(const AnalyzeIDDetections& value) { SetType(value); return *this;}

    
    inline IdentityDocumentField& WithType(AnalyzeIDDetections&& value) { SetType(std::move(value)); return *this;}


    
    inline const AnalyzeIDDetections& GetValueDetection() const{ return m_valueDetection; }

    
    inline bool ValueDetectionHasBeenSet() const { return m_valueDetectionHasBeenSet; }

    
    inline void SetValueDetection(const AnalyzeIDDetections& value) { m_valueDetectionHasBeenSet = true; m_valueDetection = value; }

    
    inline void SetValueDetection(AnalyzeIDDetections&& value) { m_valueDetectionHasBeenSet = true; m_valueDetection = std::move(value); }

    
    inline IdentityDocumentField& WithValueDetection(const AnalyzeIDDetections& value) { SetValueDetection(value); return *this;}

    
    inline IdentityDocumentField& WithValueDetection(AnalyzeIDDetections&& value) { SetValueDetection(std::move(value)); return *this;}

  private:

    AnalyzeIDDetections m_type;
    bool m_typeHasBeenSet = false;

    AnalyzeIDDetections m_valueDetection;
    bool m_valueDetectionHasBeenSet = false;
  };

} // namespace Model
} // namespace Textract
} // namespace Aws

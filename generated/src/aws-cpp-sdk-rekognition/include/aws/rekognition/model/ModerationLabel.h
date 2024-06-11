﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rekognition/Rekognition_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
   * <p>Provides information about a single type of inappropriate, unwanted, or
   * offensive content found in an image or video. Each type of moderated content has
   * a label within a hierarchical taxonomy. For more information, see Content
   * moderation in the Amazon Rekognition Developer Guide.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/rekognition-2016-06-27/ModerationLabel">AWS
   * API Reference</a></p>
   */
  class ModerationLabel
  {
  public:
    AWS_REKOGNITION_API ModerationLabel();
    AWS_REKOGNITION_API ModerationLabel(Aws::Utils::Json::JsonView jsonValue);
    AWS_REKOGNITION_API ModerationLabel& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_REKOGNITION_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Specifies the confidence that Amazon Rekognition has that the label has been
     * correctly identified.</p> <p>If you don't specify the <code>MinConfidence</code>
     * parameter in the call to <code>DetectModerationLabels</code>, the operation
     * returns labels with a confidence value greater than or equal to 50 percent.</p>
     */
    inline double GetConfidence() const{ return m_confidence; }
    inline bool ConfidenceHasBeenSet() const { return m_confidenceHasBeenSet; }
    inline void SetConfidence(double value) { m_confidenceHasBeenSet = true; m_confidence = value; }
    inline ModerationLabel& WithConfidence(double value) { SetConfidence(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The label name for the type of unsafe content detected in the image.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline ModerationLabel& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline ModerationLabel& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline ModerationLabel& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name for the parent label. Labels at the top level of the hierarchy have
     * the parent label <code>""</code>.</p>
     */
    inline const Aws::String& GetParentName() const{ return m_parentName; }
    inline bool ParentNameHasBeenSet() const { return m_parentNameHasBeenSet; }
    inline void SetParentName(const Aws::String& value) { m_parentNameHasBeenSet = true; m_parentName = value; }
    inline void SetParentName(Aws::String&& value) { m_parentNameHasBeenSet = true; m_parentName = std::move(value); }
    inline void SetParentName(const char* value) { m_parentNameHasBeenSet = true; m_parentName.assign(value); }
    inline ModerationLabel& WithParentName(const Aws::String& value) { SetParentName(value); return *this;}
    inline ModerationLabel& WithParentName(Aws::String&& value) { SetParentName(std::move(value)); return *this;}
    inline ModerationLabel& WithParentName(const char* value) { SetParentName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The level of the moderation label with regard to its taxonomy, from 1 to
     * 3.</p>
     */
    inline int GetTaxonomyLevel() const{ return m_taxonomyLevel; }
    inline bool TaxonomyLevelHasBeenSet() const { return m_taxonomyLevelHasBeenSet; }
    inline void SetTaxonomyLevel(int value) { m_taxonomyLevelHasBeenSet = true; m_taxonomyLevel = value; }
    inline ModerationLabel& WithTaxonomyLevel(int value) { SetTaxonomyLevel(value); return *this;}
    ///@}
  private:

    double m_confidence;
    bool m_confidenceHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_parentName;
    bool m_parentNameHasBeenSet = false;

    int m_taxonomyLevel;
    bool m_taxonomyLevelHasBeenSet = false;
  };

} // namespace Model
} // namespace Rekognition
} // namespace Aws

/**
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
   * <p>Contains information regarding the confidence and name of a detected content
   * type.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/rekognition-2016-06-27/ContentType">AWS
   * API Reference</a></p>
   */
  class ContentType
  {
  public:
    AWS_REKOGNITION_API ContentType();
    AWS_REKOGNITION_API ContentType(Aws::Utils::Json::JsonView jsonValue);
    AWS_REKOGNITION_API ContentType& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_REKOGNITION_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The confidence level of the label given</p>
     */
    inline double GetConfidence() const{ return m_confidence; }

    /**
     * <p>The confidence level of the label given</p>
     */
    inline bool ConfidenceHasBeenSet() const { return m_confidenceHasBeenSet; }

    /**
     * <p>The confidence level of the label given</p>
     */
    inline void SetConfidence(double value) { m_confidenceHasBeenSet = true; m_confidence = value; }

    /**
     * <p>The confidence level of the label given</p>
     */
    inline ContentType& WithConfidence(double value) { SetConfidence(value); return *this;}


    /**
     * <p>The name of the label</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the label</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the label</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the label</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the label</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the label</p>
     */
    inline ContentType& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the label</p>
     */
    inline ContentType& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the label</p>
     */
    inline ContentType& WithName(const char* value) { SetName(value); return *this;}

  private:

    double m_confidence;
    bool m_confidenceHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;
  };

} // namespace Model
} // namespace Rekognition
} // namespace Aws

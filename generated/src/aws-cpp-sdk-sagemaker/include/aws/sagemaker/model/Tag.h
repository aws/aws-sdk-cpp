/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
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
namespace SageMaker
{
namespace Model
{

  /**
   * <p>A tag object that consists of a key and an optional value, used to manage
   * metadata for SageMaker Amazon Web Services resources.</p> <p>You can add tags to
   * notebook instances, training jobs, hyperparameter tuning jobs, batch transform
   * jobs, models, labeling jobs, work teams, endpoint configurations, and endpoints.
   * For more information on adding tags to SageMaker resources, see
   * <a>AddTags</a>.</p> <p>For more information on adding metadata to your Amazon
   * Web Services resources with tagging, see <a
   * href="https://docs.aws.amazon.com/general/latest/gr/aws_tagging.html">Tagging
   * Amazon Web Services resources</a>. For advice on best practices for managing
   * Amazon Web Services resources with tagging, see <a
   * href="https://d1.awsstatic.com/whitepapers/aws-tagging-best-practices.pdf">Tagging
   * Best Practices: Implement an Effective Amazon Web Services Resource Tagging
   * Strategy</a>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/Tag">AWS API
   * Reference</a></p>
   */
  class Tag
  {
  public:
    AWS_SAGEMAKER_API Tag();
    AWS_SAGEMAKER_API Tag(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Tag& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The tag key. Tag keys must be unique per resource.</p>
     */
    inline const Aws::String& GetKey() const{ return m_key; }

    /**
     * <p>The tag key. Tag keys must be unique per resource.</p>
     */
    inline bool KeyHasBeenSet() const { return m_keyHasBeenSet; }

    /**
     * <p>The tag key. Tag keys must be unique per resource.</p>
     */
    inline void SetKey(const Aws::String& value) { m_keyHasBeenSet = true; m_key = value; }

    /**
     * <p>The tag key. Tag keys must be unique per resource.</p>
     */
    inline void SetKey(Aws::String&& value) { m_keyHasBeenSet = true; m_key = std::move(value); }

    /**
     * <p>The tag key. Tag keys must be unique per resource.</p>
     */
    inline void SetKey(const char* value) { m_keyHasBeenSet = true; m_key.assign(value); }

    /**
     * <p>The tag key. Tag keys must be unique per resource.</p>
     */
    inline Tag& WithKey(const Aws::String& value) { SetKey(value); return *this;}

    /**
     * <p>The tag key. Tag keys must be unique per resource.</p>
     */
    inline Tag& WithKey(Aws::String&& value) { SetKey(std::move(value)); return *this;}

    /**
     * <p>The tag key. Tag keys must be unique per resource.</p>
     */
    inline Tag& WithKey(const char* value) { SetKey(value); return *this;}


    /**
     * <p>The tag value.</p>
     */
    inline const Aws::String& GetValue() const{ return m_value; }

    /**
     * <p>The tag value.</p>
     */
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }

    /**
     * <p>The tag value.</p>
     */
    inline void SetValue(const Aws::String& value) { m_valueHasBeenSet = true; m_value = value; }

    /**
     * <p>The tag value.</p>
     */
    inline void SetValue(Aws::String&& value) { m_valueHasBeenSet = true; m_value = std::move(value); }

    /**
     * <p>The tag value.</p>
     */
    inline void SetValue(const char* value) { m_valueHasBeenSet = true; m_value.assign(value); }

    /**
     * <p>The tag value.</p>
     */
    inline Tag& WithValue(const Aws::String& value) { SetValue(value); return *this;}

    /**
     * <p>The tag value.</p>
     */
    inline Tag& WithValue(Aws::String&& value) { SetValue(std::move(value)); return *this;}

    /**
     * <p>The tag value.</p>
     */
    inline Tag& WithValue(const char* value) { SetValue(value); return *this;}

  private:

    Aws::String m_key;
    bool m_keyHasBeenSet = false;

    Aws::String m_value;
    bool m_valueHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws

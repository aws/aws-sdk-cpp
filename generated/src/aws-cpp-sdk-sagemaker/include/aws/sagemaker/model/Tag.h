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
   * For more information on adding tags to SageMaker resources, see <a
   * href="https://docs.aws.amazon.com/sagemaker/latest/APIReference/API_AddTags.html">AddTags</a>.</p>
   * <p>For more information on adding metadata to your Amazon Web Services resources
   * with tagging, see <a
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
    AWS_SAGEMAKER_API Tag() = default;
    AWS_SAGEMAKER_API Tag(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Tag& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The tag key. Tag keys must be unique per resource.</p>
     */
    inline const Aws::String& GetKey() const { return m_key; }
    inline bool KeyHasBeenSet() const { return m_keyHasBeenSet; }
    template<typename KeyT = Aws::String>
    void SetKey(KeyT&& value) { m_keyHasBeenSet = true; m_key = std::forward<KeyT>(value); }
    template<typename KeyT = Aws::String>
    Tag& WithKey(KeyT&& value) { SetKey(std::forward<KeyT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The tag value.</p>
     */
    inline const Aws::String& GetValue() const { return m_value; }
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }
    template<typename ValueT = Aws::String>
    void SetValue(ValueT&& value) { m_valueHasBeenSet = true; m_value = std::forward<ValueT>(value); }
    template<typename ValueT = Aws::String>
    Tag& WithValue(ValueT&& value) { SetValue(std::forward<ValueT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_key;
    bool m_keyHasBeenSet = false;

    Aws::String m_value;
    bool m_valueHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws

/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/sagemaker/model/FeatureStatus.h>
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
   * <p>A collection of settings that configure the Amazon Q experience within the
   * domain.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/AmazonQSettings">AWS
   * API Reference</a></p>
   */
  class AmazonQSettings
  {
  public:
    AWS_SAGEMAKER_API AmazonQSettings() = default;
    AWS_SAGEMAKER_API AmazonQSettings(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API AmazonQSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Whether Amazon Q has been enabled within the domain.</p>
     */
    inline FeatureStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(FeatureStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline AmazonQSettings& WithStatus(FeatureStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the Amazon Q profile used within the domain.</p>
     */
    inline const Aws::String& GetQProfileArn() const { return m_qProfileArn; }
    inline bool QProfileArnHasBeenSet() const { return m_qProfileArnHasBeenSet; }
    template<typename QProfileArnT = Aws::String>
    void SetQProfileArn(QProfileArnT&& value) { m_qProfileArnHasBeenSet = true; m_qProfileArn = std::forward<QProfileArnT>(value); }
    template<typename QProfileArnT = Aws::String>
    AmazonQSettings& WithQProfileArn(QProfileArnT&& value) { SetQProfileArn(std::forward<QProfileArnT>(value)); return *this;}
    ///@}
  private:

    FeatureStatus m_status{FeatureStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    Aws::String m_qProfileArn;
    bool m_qProfileArnHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws

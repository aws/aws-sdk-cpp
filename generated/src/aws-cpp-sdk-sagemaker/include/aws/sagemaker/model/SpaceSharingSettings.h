/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/sagemaker/model/SharingType.h>
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
   * <p>A collection of space sharing settings.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/SpaceSharingSettings">AWS
   * API Reference</a></p>
   */
  class SpaceSharingSettings
  {
  public:
    AWS_SAGEMAKER_API SpaceSharingSettings() = default;
    AWS_SAGEMAKER_API SpaceSharingSettings(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API SpaceSharingSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Specifies the sharing type of the space.</p>
     */
    inline SharingType GetSharingType() const { return m_sharingType; }
    inline bool SharingTypeHasBeenSet() const { return m_sharingTypeHasBeenSet; }
    inline void SetSharingType(SharingType value) { m_sharingTypeHasBeenSet = true; m_sharingType = value; }
    inline SpaceSharingSettings& WithSharingType(SharingType value) { SetSharingType(value); return *this;}
    ///@}
  private:

    SharingType m_sharingType{SharingType::NOT_SET};
    bool m_sharingTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws

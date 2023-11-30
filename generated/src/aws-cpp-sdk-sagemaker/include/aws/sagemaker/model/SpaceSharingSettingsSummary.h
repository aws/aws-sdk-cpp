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
   * <p>Specifies summary information about the space sharing settings.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/SpaceSharingSettingsSummary">AWS
   * API Reference</a></p>
   */
  class SpaceSharingSettingsSummary
  {
  public:
    AWS_SAGEMAKER_API SpaceSharingSettingsSummary();
    AWS_SAGEMAKER_API SpaceSharingSettingsSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API SpaceSharingSettingsSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Specifies the sharing type of the space.</p>
     */
    inline const SharingType& GetSharingType() const{ return m_sharingType; }

    /**
     * <p>Specifies the sharing type of the space.</p>
     */
    inline bool SharingTypeHasBeenSet() const { return m_sharingTypeHasBeenSet; }

    /**
     * <p>Specifies the sharing type of the space.</p>
     */
    inline void SetSharingType(const SharingType& value) { m_sharingTypeHasBeenSet = true; m_sharingType = value; }

    /**
     * <p>Specifies the sharing type of the space.</p>
     */
    inline void SetSharingType(SharingType&& value) { m_sharingTypeHasBeenSet = true; m_sharingType = std::move(value); }

    /**
     * <p>Specifies the sharing type of the space.</p>
     */
    inline SpaceSharingSettingsSummary& WithSharingType(const SharingType& value) { SetSharingType(value); return *this;}

    /**
     * <p>Specifies the sharing type of the space.</p>
     */
    inline SpaceSharingSettingsSummary& WithSharingType(SharingType&& value) { SetSharingType(std::move(value)); return *this;}

  private:

    SharingType m_sharingType;
    bool m_sharingTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws

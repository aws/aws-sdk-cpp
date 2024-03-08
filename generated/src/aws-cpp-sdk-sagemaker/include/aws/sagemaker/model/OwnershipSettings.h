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
   * <p>The collection of ownership settings for a space.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/OwnershipSettings">AWS
   * API Reference</a></p>
   */
  class OwnershipSettings
  {
  public:
    AWS_SAGEMAKER_API OwnershipSettings();
    AWS_SAGEMAKER_API OwnershipSettings(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API OwnershipSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The user profile who is the owner of the private space.</p>
     */
    inline const Aws::String& GetOwnerUserProfileName() const{ return m_ownerUserProfileName; }

    /**
     * <p>The user profile who is the owner of the private space.</p>
     */
    inline bool OwnerUserProfileNameHasBeenSet() const { return m_ownerUserProfileNameHasBeenSet; }

    /**
     * <p>The user profile who is the owner of the private space.</p>
     */
    inline void SetOwnerUserProfileName(const Aws::String& value) { m_ownerUserProfileNameHasBeenSet = true; m_ownerUserProfileName = value; }

    /**
     * <p>The user profile who is the owner of the private space.</p>
     */
    inline void SetOwnerUserProfileName(Aws::String&& value) { m_ownerUserProfileNameHasBeenSet = true; m_ownerUserProfileName = std::move(value); }

    /**
     * <p>The user profile who is the owner of the private space.</p>
     */
    inline void SetOwnerUserProfileName(const char* value) { m_ownerUserProfileNameHasBeenSet = true; m_ownerUserProfileName.assign(value); }

    /**
     * <p>The user profile who is the owner of the private space.</p>
     */
    inline OwnershipSettings& WithOwnerUserProfileName(const Aws::String& value) { SetOwnerUserProfileName(value); return *this;}

    /**
     * <p>The user profile who is the owner of the private space.</p>
     */
    inline OwnershipSettings& WithOwnerUserProfileName(Aws::String&& value) { SetOwnerUserProfileName(std::move(value)); return *this;}

    /**
     * <p>The user profile who is the owner of the private space.</p>
     */
    inline OwnershipSettings& WithOwnerUserProfileName(const char* value) { SetOwnerUserProfileName(value); return *this;}

  private:

    Aws::String m_ownerUserProfileName;
    bool m_ownerUserProfileNameHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws

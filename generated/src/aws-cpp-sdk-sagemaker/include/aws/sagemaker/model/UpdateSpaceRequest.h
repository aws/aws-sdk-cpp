/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/sagemaker/SageMakerRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sagemaker/model/SpaceSettings.h>
#include <utility>

namespace Aws
{
namespace SageMaker
{
namespace Model
{

  /**
   */
  class UpdateSpaceRequest : public SageMakerRequest
  {
  public:
    AWS_SAGEMAKER_API UpdateSpaceRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateSpace"; }

    AWS_SAGEMAKER_API Aws::String SerializePayload() const override;

    AWS_SAGEMAKER_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The ID of the associated Domain.</p>
     */
    inline const Aws::String& GetDomainId() const{ return m_domainId; }

    /**
     * <p>The ID of the associated Domain.</p>
     */
    inline bool DomainIdHasBeenSet() const { return m_domainIdHasBeenSet; }

    /**
     * <p>The ID of the associated Domain.</p>
     */
    inline void SetDomainId(const Aws::String& value) { m_domainIdHasBeenSet = true; m_domainId = value; }

    /**
     * <p>The ID of the associated Domain.</p>
     */
    inline void SetDomainId(Aws::String&& value) { m_domainIdHasBeenSet = true; m_domainId = std::move(value); }

    /**
     * <p>The ID of the associated Domain.</p>
     */
    inline void SetDomainId(const char* value) { m_domainIdHasBeenSet = true; m_domainId.assign(value); }

    /**
     * <p>The ID of the associated Domain.</p>
     */
    inline UpdateSpaceRequest& WithDomainId(const Aws::String& value) { SetDomainId(value); return *this;}

    /**
     * <p>The ID of the associated Domain.</p>
     */
    inline UpdateSpaceRequest& WithDomainId(Aws::String&& value) { SetDomainId(std::move(value)); return *this;}

    /**
     * <p>The ID of the associated Domain.</p>
     */
    inline UpdateSpaceRequest& WithDomainId(const char* value) { SetDomainId(value); return *this;}


    /**
     * <p>The name of the space.</p>
     */
    inline const Aws::String& GetSpaceName() const{ return m_spaceName; }

    /**
     * <p>The name of the space.</p>
     */
    inline bool SpaceNameHasBeenSet() const { return m_spaceNameHasBeenSet; }

    /**
     * <p>The name of the space.</p>
     */
    inline void SetSpaceName(const Aws::String& value) { m_spaceNameHasBeenSet = true; m_spaceName = value; }

    /**
     * <p>The name of the space.</p>
     */
    inline void SetSpaceName(Aws::String&& value) { m_spaceNameHasBeenSet = true; m_spaceName = std::move(value); }

    /**
     * <p>The name of the space.</p>
     */
    inline void SetSpaceName(const char* value) { m_spaceNameHasBeenSet = true; m_spaceName.assign(value); }

    /**
     * <p>The name of the space.</p>
     */
    inline UpdateSpaceRequest& WithSpaceName(const Aws::String& value) { SetSpaceName(value); return *this;}

    /**
     * <p>The name of the space.</p>
     */
    inline UpdateSpaceRequest& WithSpaceName(Aws::String&& value) { SetSpaceName(std::move(value)); return *this;}

    /**
     * <p>The name of the space.</p>
     */
    inline UpdateSpaceRequest& WithSpaceName(const char* value) { SetSpaceName(value); return *this;}


    /**
     * <p>A collection of space settings.</p>
     */
    inline const SpaceSettings& GetSpaceSettings() const{ return m_spaceSettings; }

    /**
     * <p>A collection of space settings.</p>
     */
    inline bool SpaceSettingsHasBeenSet() const { return m_spaceSettingsHasBeenSet; }

    /**
     * <p>A collection of space settings.</p>
     */
    inline void SetSpaceSettings(const SpaceSettings& value) { m_spaceSettingsHasBeenSet = true; m_spaceSettings = value; }

    /**
     * <p>A collection of space settings.</p>
     */
    inline void SetSpaceSettings(SpaceSettings&& value) { m_spaceSettingsHasBeenSet = true; m_spaceSettings = std::move(value); }

    /**
     * <p>A collection of space settings.</p>
     */
    inline UpdateSpaceRequest& WithSpaceSettings(const SpaceSettings& value) { SetSpaceSettings(value); return *this;}

    /**
     * <p>A collection of space settings.</p>
     */
    inline UpdateSpaceRequest& WithSpaceSettings(SpaceSettings&& value) { SetSpaceSettings(std::move(value)); return *this;}

  private:

    Aws::String m_domainId;
    bool m_domainIdHasBeenSet = false;

    Aws::String m_spaceName;
    bool m_spaceNameHasBeenSet = false;

    SpaceSettings m_spaceSettings;
    bool m_spaceSettingsHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws

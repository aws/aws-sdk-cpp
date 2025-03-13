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
    AWS_SAGEMAKER_API UpdateSpaceRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateSpace"; }

    AWS_SAGEMAKER_API Aws::String SerializePayload() const override;

    AWS_SAGEMAKER_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The ID of the associated domain.</p>
     */
    inline const Aws::String& GetDomainId() const { return m_domainId; }
    inline bool DomainIdHasBeenSet() const { return m_domainIdHasBeenSet; }
    template<typename DomainIdT = Aws::String>
    void SetDomainId(DomainIdT&& value) { m_domainIdHasBeenSet = true; m_domainId = std::forward<DomainIdT>(value); }
    template<typename DomainIdT = Aws::String>
    UpdateSpaceRequest& WithDomainId(DomainIdT&& value) { SetDomainId(std::forward<DomainIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the space.</p>
     */
    inline const Aws::String& GetSpaceName() const { return m_spaceName; }
    inline bool SpaceNameHasBeenSet() const { return m_spaceNameHasBeenSet; }
    template<typename SpaceNameT = Aws::String>
    void SetSpaceName(SpaceNameT&& value) { m_spaceNameHasBeenSet = true; m_spaceName = std::forward<SpaceNameT>(value); }
    template<typename SpaceNameT = Aws::String>
    UpdateSpaceRequest& WithSpaceName(SpaceNameT&& value) { SetSpaceName(std::forward<SpaceNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A collection of space settings.</p>
     */
    inline const SpaceSettings& GetSpaceSettings() const { return m_spaceSettings; }
    inline bool SpaceSettingsHasBeenSet() const { return m_spaceSettingsHasBeenSet; }
    template<typename SpaceSettingsT = SpaceSettings>
    void SetSpaceSettings(SpaceSettingsT&& value) { m_spaceSettingsHasBeenSet = true; m_spaceSettings = std::forward<SpaceSettingsT>(value); }
    template<typename SpaceSettingsT = SpaceSettings>
    UpdateSpaceRequest& WithSpaceSettings(SpaceSettingsT&& value) { SetSpaceSettings(std::forward<SpaceSettingsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the space that appears in the Amazon SageMaker Studio UI.</p>
     */
    inline const Aws::String& GetSpaceDisplayName() const { return m_spaceDisplayName; }
    inline bool SpaceDisplayNameHasBeenSet() const { return m_spaceDisplayNameHasBeenSet; }
    template<typename SpaceDisplayNameT = Aws::String>
    void SetSpaceDisplayName(SpaceDisplayNameT&& value) { m_spaceDisplayNameHasBeenSet = true; m_spaceDisplayName = std::forward<SpaceDisplayNameT>(value); }
    template<typename SpaceDisplayNameT = Aws::String>
    UpdateSpaceRequest& WithSpaceDisplayName(SpaceDisplayNameT&& value) { SetSpaceDisplayName(std::forward<SpaceDisplayNameT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_domainId;
    bool m_domainIdHasBeenSet = false;

    Aws::String m_spaceName;
    bool m_spaceNameHasBeenSet = false;

    SpaceSettings m_spaceSettings;
    bool m_spaceSettingsHasBeenSet = false;

    Aws::String m_spaceDisplayName;
    bool m_spaceDisplayNameHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws

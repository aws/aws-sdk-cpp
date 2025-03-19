/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/schemas/Schemas_EXPORTS.h>
#include <aws/schemas/SchemasRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Schemas
{
namespace Model
{

  /**
   */
  class UpdateDiscovererRequest : public SchemasRequest
  {
  public:
    AWS_SCHEMAS_API UpdateDiscovererRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateDiscoverer"; }

    AWS_SCHEMAS_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The description of the discoverer to update.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    UpdateDiscovererRequest& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the discoverer.</p>
     */
    inline const Aws::String& GetDiscovererId() const { return m_discovererId; }
    inline bool DiscovererIdHasBeenSet() const { return m_discovererIdHasBeenSet; }
    template<typename DiscovererIdT = Aws::String>
    void SetDiscovererId(DiscovererIdT&& value) { m_discovererIdHasBeenSet = true; m_discovererId = std::forward<DiscovererIdT>(value); }
    template<typename DiscovererIdT = Aws::String>
    UpdateDiscovererRequest& WithDiscovererId(DiscovererIdT&& value) { SetDiscovererId(std::forward<DiscovererIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Support discovery of schemas in events sent to the bus from another account.
     * (default: true)</p>
     */
    inline bool GetCrossAccount() const { return m_crossAccount; }
    inline bool CrossAccountHasBeenSet() const { return m_crossAccountHasBeenSet; }
    inline void SetCrossAccount(bool value) { m_crossAccountHasBeenSet = true; m_crossAccount = value; }
    inline UpdateDiscovererRequest& WithCrossAccount(bool value) { SetCrossAccount(value); return *this;}
    ///@}
  private:

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_discovererId;
    bool m_discovererIdHasBeenSet = false;

    bool m_crossAccount{false};
    bool m_crossAccountHasBeenSet = false;
  };

} // namespace Model
} // namespace Schemas
} // namespace Aws

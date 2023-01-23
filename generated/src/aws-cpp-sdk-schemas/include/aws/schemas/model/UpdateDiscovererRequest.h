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
    AWS_SCHEMAS_API UpdateDiscovererRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateDiscoverer"; }

    AWS_SCHEMAS_API Aws::String SerializePayload() const override;


    /**
     * <p>The description of the discoverer to update.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>The description of the discoverer to update.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>The description of the discoverer to update.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>The description of the discoverer to update.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>The description of the discoverer to update.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>The description of the discoverer to update.</p>
     */
    inline UpdateDiscovererRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The description of the discoverer to update.</p>
     */
    inline UpdateDiscovererRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>The description of the discoverer to update.</p>
     */
    inline UpdateDiscovererRequest& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The ID of the discoverer.</p>
     */
    inline const Aws::String& GetDiscovererId() const{ return m_discovererId; }

    /**
     * <p>The ID of the discoverer.</p>
     */
    inline bool DiscovererIdHasBeenSet() const { return m_discovererIdHasBeenSet; }

    /**
     * <p>The ID of the discoverer.</p>
     */
    inline void SetDiscovererId(const Aws::String& value) { m_discovererIdHasBeenSet = true; m_discovererId = value; }

    /**
     * <p>The ID of the discoverer.</p>
     */
    inline void SetDiscovererId(Aws::String&& value) { m_discovererIdHasBeenSet = true; m_discovererId = std::move(value); }

    /**
     * <p>The ID of the discoverer.</p>
     */
    inline void SetDiscovererId(const char* value) { m_discovererIdHasBeenSet = true; m_discovererId.assign(value); }

    /**
     * <p>The ID of the discoverer.</p>
     */
    inline UpdateDiscovererRequest& WithDiscovererId(const Aws::String& value) { SetDiscovererId(value); return *this;}

    /**
     * <p>The ID of the discoverer.</p>
     */
    inline UpdateDiscovererRequest& WithDiscovererId(Aws::String&& value) { SetDiscovererId(std::move(value)); return *this;}

    /**
     * <p>The ID of the discoverer.</p>
     */
    inline UpdateDiscovererRequest& WithDiscovererId(const char* value) { SetDiscovererId(value); return *this;}


    /**
     * <p>Support discovery of schemas in events sent to the bus from another account.
     * (default: true)</p>
     */
    inline bool GetCrossAccount() const{ return m_crossAccount; }

    /**
     * <p>Support discovery of schemas in events sent to the bus from another account.
     * (default: true)</p>
     */
    inline bool CrossAccountHasBeenSet() const { return m_crossAccountHasBeenSet; }

    /**
     * <p>Support discovery of schemas in events sent to the bus from another account.
     * (default: true)</p>
     */
    inline void SetCrossAccount(bool value) { m_crossAccountHasBeenSet = true; m_crossAccount = value; }

    /**
     * <p>Support discovery of schemas in events sent to the bus from another account.
     * (default: true)</p>
     */
    inline UpdateDiscovererRequest& WithCrossAccount(bool value) { SetCrossAccount(value); return *this;}

  private:

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_discovererId;
    bool m_discovererIdHasBeenSet = false;

    bool m_crossAccount;
    bool m_crossAccountHasBeenSet = false;
  };

} // namespace Model
} // namespace Schemas
} // namespace Aws

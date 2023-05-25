/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sdb/SimpleDB_EXPORTS.h>
#include <aws/sdb/SimpleDBRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace SimpleDB
{
namespace Model
{

  /**
   */
  class DeleteDomainRequest : public SimpleDBRequest
  {
  public:
    AWS_SIMPLEDB_API DeleteDomainRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteDomain"; }

    AWS_SIMPLEDB_API Aws::String SerializePayload() const override;

  protected:
    AWS_SIMPLEDB_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    /**
     * The name of the domain to delete.
     */
    inline const Aws::String& GetDomainName() const{ return m_domainName; }

    /**
     * The name of the domain to delete.
     */
    inline bool DomainNameHasBeenSet() const { return m_domainNameHasBeenSet; }

    /**
     * The name of the domain to delete.
     */
    inline void SetDomainName(const Aws::String& value) { m_domainNameHasBeenSet = true; m_domainName = value; }

    /**
     * The name of the domain to delete.
     */
    inline void SetDomainName(Aws::String&& value) { m_domainNameHasBeenSet = true; m_domainName = std::move(value); }

    /**
     * The name of the domain to delete.
     */
    inline void SetDomainName(const char* value) { m_domainNameHasBeenSet = true; m_domainName.assign(value); }

    /**
     * The name of the domain to delete.
     */
    inline DeleteDomainRequest& WithDomainName(const Aws::String& value) { SetDomainName(value); return *this;}

    /**
     * The name of the domain to delete.
     */
    inline DeleteDomainRequest& WithDomainName(Aws::String&& value) { SetDomainName(std::move(value)); return *this;}

    /**
     * The name of the domain to delete.
     */
    inline DeleteDomainRequest& WithDomainName(const char* value) { SetDomainName(value); return *this;}

  private:

    Aws::String m_domainName;
    bool m_domainNameHasBeenSet = false;
  };

} // namespace Model
} // namespace SimpleDB
} // namespace Aws

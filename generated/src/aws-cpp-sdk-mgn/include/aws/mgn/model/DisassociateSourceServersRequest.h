/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mgn/Mgn_EXPORTS.h>
#include <aws/mgn/MgnRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <utility>

namespace Aws
{
namespace mgn
{
namespace Model
{

  /**
   */
  class DisassociateSourceServersRequest : public MgnRequest
  {
  public:
    AWS_MGN_API DisassociateSourceServersRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DisassociateSourceServers"; }

    AWS_MGN_API Aws::String SerializePayload() const override;


    /**
     * <p>Application ID.</p>
     */
    inline const Aws::String& GetApplicationID() const{ return m_applicationID; }

    /**
     * <p>Application ID.</p>
     */
    inline bool ApplicationIDHasBeenSet() const { return m_applicationIDHasBeenSet; }

    /**
     * <p>Application ID.</p>
     */
    inline void SetApplicationID(const Aws::String& value) { m_applicationIDHasBeenSet = true; m_applicationID = value; }

    /**
     * <p>Application ID.</p>
     */
    inline void SetApplicationID(Aws::String&& value) { m_applicationIDHasBeenSet = true; m_applicationID = std::move(value); }

    /**
     * <p>Application ID.</p>
     */
    inline void SetApplicationID(const char* value) { m_applicationIDHasBeenSet = true; m_applicationID.assign(value); }

    /**
     * <p>Application ID.</p>
     */
    inline DisassociateSourceServersRequest& WithApplicationID(const Aws::String& value) { SetApplicationID(value); return *this;}

    /**
     * <p>Application ID.</p>
     */
    inline DisassociateSourceServersRequest& WithApplicationID(Aws::String&& value) { SetApplicationID(std::move(value)); return *this;}

    /**
     * <p>Application ID.</p>
     */
    inline DisassociateSourceServersRequest& WithApplicationID(const char* value) { SetApplicationID(value); return *this;}


    /**
     * <p>Source server IDs list.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSourceServerIDs() const{ return m_sourceServerIDs; }

    /**
     * <p>Source server IDs list.</p>
     */
    inline bool SourceServerIDsHasBeenSet() const { return m_sourceServerIDsHasBeenSet; }

    /**
     * <p>Source server IDs list.</p>
     */
    inline void SetSourceServerIDs(const Aws::Vector<Aws::String>& value) { m_sourceServerIDsHasBeenSet = true; m_sourceServerIDs = value; }

    /**
     * <p>Source server IDs list.</p>
     */
    inline void SetSourceServerIDs(Aws::Vector<Aws::String>&& value) { m_sourceServerIDsHasBeenSet = true; m_sourceServerIDs = std::move(value); }

    /**
     * <p>Source server IDs list.</p>
     */
    inline DisassociateSourceServersRequest& WithSourceServerIDs(const Aws::Vector<Aws::String>& value) { SetSourceServerIDs(value); return *this;}

    /**
     * <p>Source server IDs list.</p>
     */
    inline DisassociateSourceServersRequest& WithSourceServerIDs(Aws::Vector<Aws::String>&& value) { SetSourceServerIDs(std::move(value)); return *this;}

    /**
     * <p>Source server IDs list.</p>
     */
    inline DisassociateSourceServersRequest& AddSourceServerIDs(const Aws::String& value) { m_sourceServerIDsHasBeenSet = true; m_sourceServerIDs.push_back(value); return *this; }

    /**
     * <p>Source server IDs list.</p>
     */
    inline DisassociateSourceServersRequest& AddSourceServerIDs(Aws::String&& value) { m_sourceServerIDsHasBeenSet = true; m_sourceServerIDs.push_back(std::move(value)); return *this; }

    /**
     * <p>Source server IDs list.</p>
     */
    inline DisassociateSourceServersRequest& AddSourceServerIDs(const char* value) { m_sourceServerIDsHasBeenSet = true; m_sourceServerIDs.push_back(value); return *this; }

  private:

    Aws::String m_applicationID;
    bool m_applicationIDHasBeenSet = false;

    Aws::Vector<Aws::String> m_sourceServerIDs;
    bool m_sourceServerIDsHasBeenSet = false;
  };

} // namespace Model
} // namespace mgn
} // namespace Aws

/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/organizations/Organizations_EXPORTS.h>
#include <aws/organizations/OrganizationsRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Organizations
{
namespace Model
{

  /**
   */
  class MoveAccountRequest : public OrganizationsRequest
  {
  public:
    AWS_ORGANIZATIONS_API MoveAccountRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "MoveAccount"; }

    AWS_ORGANIZATIONS_API Aws::String SerializePayload() const override;

    AWS_ORGANIZATIONS_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The unique identifier (ID) of the account that you want to move.</p> <p>The
     * <a href="http://wikipedia.org/wiki/regex">regex pattern</a> for an account ID
     * string requires exactly 12 digits.</p>
     */
    inline const Aws::String& GetAccountId() const{ return m_accountId; }

    /**
     * <p>The unique identifier (ID) of the account that you want to move.</p> <p>The
     * <a href="http://wikipedia.org/wiki/regex">regex pattern</a> for an account ID
     * string requires exactly 12 digits.</p>
     */
    inline bool AccountIdHasBeenSet() const { return m_accountIdHasBeenSet; }

    /**
     * <p>The unique identifier (ID) of the account that you want to move.</p> <p>The
     * <a href="http://wikipedia.org/wiki/regex">regex pattern</a> for an account ID
     * string requires exactly 12 digits.</p>
     */
    inline void SetAccountId(const Aws::String& value) { m_accountIdHasBeenSet = true; m_accountId = value; }

    /**
     * <p>The unique identifier (ID) of the account that you want to move.</p> <p>The
     * <a href="http://wikipedia.org/wiki/regex">regex pattern</a> for an account ID
     * string requires exactly 12 digits.</p>
     */
    inline void SetAccountId(Aws::String&& value) { m_accountIdHasBeenSet = true; m_accountId = std::move(value); }

    /**
     * <p>The unique identifier (ID) of the account that you want to move.</p> <p>The
     * <a href="http://wikipedia.org/wiki/regex">regex pattern</a> for an account ID
     * string requires exactly 12 digits.</p>
     */
    inline void SetAccountId(const char* value) { m_accountIdHasBeenSet = true; m_accountId.assign(value); }

    /**
     * <p>The unique identifier (ID) of the account that you want to move.</p> <p>The
     * <a href="http://wikipedia.org/wiki/regex">regex pattern</a> for an account ID
     * string requires exactly 12 digits.</p>
     */
    inline MoveAccountRequest& WithAccountId(const Aws::String& value) { SetAccountId(value); return *this;}

    /**
     * <p>The unique identifier (ID) of the account that you want to move.</p> <p>The
     * <a href="http://wikipedia.org/wiki/regex">regex pattern</a> for an account ID
     * string requires exactly 12 digits.</p>
     */
    inline MoveAccountRequest& WithAccountId(Aws::String&& value) { SetAccountId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier (ID) of the account that you want to move.</p> <p>The
     * <a href="http://wikipedia.org/wiki/regex">regex pattern</a> for an account ID
     * string requires exactly 12 digits.</p>
     */
    inline MoveAccountRequest& WithAccountId(const char* value) { SetAccountId(value); return *this;}


    /**
     * <p>The unique identifier (ID) of the root or organizational unit that you want
     * to move the account from.</p> <p>The <a
     * href="http://wikipedia.org/wiki/regex">regex pattern</a> for a parent ID string
     * requires one of the following:</p> <ul> <li> <p> <b>Root</b> - A string that
     * begins with "r-" followed by from 4 to 32 lowercase letters or digits.</p> </li>
     * <li> <p> <b>Organizational unit (OU)</b> - A string that begins with "ou-"
     * followed by from 4 to 32 lowercase letters or digits (the ID of the root that
     * the OU is in). This string is followed by a second "-" dash and from 8 to 32
     * additional lowercase letters or digits.</p> </li> </ul>
     */
    inline const Aws::String& GetSourceParentId() const{ return m_sourceParentId; }

    /**
     * <p>The unique identifier (ID) of the root or organizational unit that you want
     * to move the account from.</p> <p>The <a
     * href="http://wikipedia.org/wiki/regex">regex pattern</a> for a parent ID string
     * requires one of the following:</p> <ul> <li> <p> <b>Root</b> - A string that
     * begins with "r-" followed by from 4 to 32 lowercase letters or digits.</p> </li>
     * <li> <p> <b>Organizational unit (OU)</b> - A string that begins with "ou-"
     * followed by from 4 to 32 lowercase letters or digits (the ID of the root that
     * the OU is in). This string is followed by a second "-" dash and from 8 to 32
     * additional lowercase letters or digits.</p> </li> </ul>
     */
    inline bool SourceParentIdHasBeenSet() const { return m_sourceParentIdHasBeenSet; }

    /**
     * <p>The unique identifier (ID) of the root or organizational unit that you want
     * to move the account from.</p> <p>The <a
     * href="http://wikipedia.org/wiki/regex">regex pattern</a> for a parent ID string
     * requires one of the following:</p> <ul> <li> <p> <b>Root</b> - A string that
     * begins with "r-" followed by from 4 to 32 lowercase letters or digits.</p> </li>
     * <li> <p> <b>Organizational unit (OU)</b> - A string that begins with "ou-"
     * followed by from 4 to 32 lowercase letters or digits (the ID of the root that
     * the OU is in). This string is followed by a second "-" dash and from 8 to 32
     * additional lowercase letters or digits.</p> </li> </ul>
     */
    inline void SetSourceParentId(const Aws::String& value) { m_sourceParentIdHasBeenSet = true; m_sourceParentId = value; }

    /**
     * <p>The unique identifier (ID) of the root or organizational unit that you want
     * to move the account from.</p> <p>The <a
     * href="http://wikipedia.org/wiki/regex">regex pattern</a> for a parent ID string
     * requires one of the following:</p> <ul> <li> <p> <b>Root</b> - A string that
     * begins with "r-" followed by from 4 to 32 lowercase letters or digits.</p> </li>
     * <li> <p> <b>Organizational unit (OU)</b> - A string that begins with "ou-"
     * followed by from 4 to 32 lowercase letters or digits (the ID of the root that
     * the OU is in). This string is followed by a second "-" dash and from 8 to 32
     * additional lowercase letters or digits.</p> </li> </ul>
     */
    inline void SetSourceParentId(Aws::String&& value) { m_sourceParentIdHasBeenSet = true; m_sourceParentId = std::move(value); }

    /**
     * <p>The unique identifier (ID) of the root or organizational unit that you want
     * to move the account from.</p> <p>The <a
     * href="http://wikipedia.org/wiki/regex">regex pattern</a> for a parent ID string
     * requires one of the following:</p> <ul> <li> <p> <b>Root</b> - A string that
     * begins with "r-" followed by from 4 to 32 lowercase letters or digits.</p> </li>
     * <li> <p> <b>Organizational unit (OU)</b> - A string that begins with "ou-"
     * followed by from 4 to 32 lowercase letters or digits (the ID of the root that
     * the OU is in). This string is followed by a second "-" dash and from 8 to 32
     * additional lowercase letters or digits.</p> </li> </ul>
     */
    inline void SetSourceParentId(const char* value) { m_sourceParentIdHasBeenSet = true; m_sourceParentId.assign(value); }

    /**
     * <p>The unique identifier (ID) of the root or organizational unit that you want
     * to move the account from.</p> <p>The <a
     * href="http://wikipedia.org/wiki/regex">regex pattern</a> for a parent ID string
     * requires one of the following:</p> <ul> <li> <p> <b>Root</b> - A string that
     * begins with "r-" followed by from 4 to 32 lowercase letters or digits.</p> </li>
     * <li> <p> <b>Organizational unit (OU)</b> - A string that begins with "ou-"
     * followed by from 4 to 32 lowercase letters or digits (the ID of the root that
     * the OU is in). This string is followed by a second "-" dash and from 8 to 32
     * additional lowercase letters or digits.</p> </li> </ul>
     */
    inline MoveAccountRequest& WithSourceParentId(const Aws::String& value) { SetSourceParentId(value); return *this;}

    /**
     * <p>The unique identifier (ID) of the root or organizational unit that you want
     * to move the account from.</p> <p>The <a
     * href="http://wikipedia.org/wiki/regex">regex pattern</a> for a parent ID string
     * requires one of the following:</p> <ul> <li> <p> <b>Root</b> - A string that
     * begins with "r-" followed by from 4 to 32 lowercase letters or digits.</p> </li>
     * <li> <p> <b>Organizational unit (OU)</b> - A string that begins with "ou-"
     * followed by from 4 to 32 lowercase letters or digits (the ID of the root that
     * the OU is in). This string is followed by a second "-" dash and from 8 to 32
     * additional lowercase letters or digits.</p> </li> </ul>
     */
    inline MoveAccountRequest& WithSourceParentId(Aws::String&& value) { SetSourceParentId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier (ID) of the root or organizational unit that you want
     * to move the account from.</p> <p>The <a
     * href="http://wikipedia.org/wiki/regex">regex pattern</a> for a parent ID string
     * requires one of the following:</p> <ul> <li> <p> <b>Root</b> - A string that
     * begins with "r-" followed by from 4 to 32 lowercase letters or digits.</p> </li>
     * <li> <p> <b>Organizational unit (OU)</b> - A string that begins with "ou-"
     * followed by from 4 to 32 lowercase letters or digits (the ID of the root that
     * the OU is in). This string is followed by a second "-" dash and from 8 to 32
     * additional lowercase letters or digits.</p> </li> </ul>
     */
    inline MoveAccountRequest& WithSourceParentId(const char* value) { SetSourceParentId(value); return *this;}


    /**
     * <p>The unique identifier (ID) of the root or organizational unit that you want
     * to move the account to.</p> <p>The <a
     * href="http://wikipedia.org/wiki/regex">regex pattern</a> for a parent ID string
     * requires one of the following:</p> <ul> <li> <p> <b>Root</b> - A string that
     * begins with "r-" followed by from 4 to 32 lowercase letters or digits.</p> </li>
     * <li> <p> <b>Organizational unit (OU)</b> - A string that begins with "ou-"
     * followed by from 4 to 32 lowercase letters or digits (the ID of the root that
     * the OU is in). This string is followed by a second "-" dash and from 8 to 32
     * additional lowercase letters or digits.</p> </li> </ul>
     */
    inline const Aws::String& GetDestinationParentId() const{ return m_destinationParentId; }

    /**
     * <p>The unique identifier (ID) of the root or organizational unit that you want
     * to move the account to.</p> <p>The <a
     * href="http://wikipedia.org/wiki/regex">regex pattern</a> for a parent ID string
     * requires one of the following:</p> <ul> <li> <p> <b>Root</b> - A string that
     * begins with "r-" followed by from 4 to 32 lowercase letters or digits.</p> </li>
     * <li> <p> <b>Organizational unit (OU)</b> - A string that begins with "ou-"
     * followed by from 4 to 32 lowercase letters or digits (the ID of the root that
     * the OU is in). This string is followed by a second "-" dash and from 8 to 32
     * additional lowercase letters or digits.</p> </li> </ul>
     */
    inline bool DestinationParentIdHasBeenSet() const { return m_destinationParentIdHasBeenSet; }

    /**
     * <p>The unique identifier (ID) of the root or organizational unit that you want
     * to move the account to.</p> <p>The <a
     * href="http://wikipedia.org/wiki/regex">regex pattern</a> for a parent ID string
     * requires one of the following:</p> <ul> <li> <p> <b>Root</b> - A string that
     * begins with "r-" followed by from 4 to 32 lowercase letters or digits.</p> </li>
     * <li> <p> <b>Organizational unit (OU)</b> - A string that begins with "ou-"
     * followed by from 4 to 32 lowercase letters or digits (the ID of the root that
     * the OU is in). This string is followed by a second "-" dash and from 8 to 32
     * additional lowercase letters or digits.</p> </li> </ul>
     */
    inline void SetDestinationParentId(const Aws::String& value) { m_destinationParentIdHasBeenSet = true; m_destinationParentId = value; }

    /**
     * <p>The unique identifier (ID) of the root or organizational unit that you want
     * to move the account to.</p> <p>The <a
     * href="http://wikipedia.org/wiki/regex">regex pattern</a> for a parent ID string
     * requires one of the following:</p> <ul> <li> <p> <b>Root</b> - A string that
     * begins with "r-" followed by from 4 to 32 lowercase letters or digits.</p> </li>
     * <li> <p> <b>Organizational unit (OU)</b> - A string that begins with "ou-"
     * followed by from 4 to 32 lowercase letters or digits (the ID of the root that
     * the OU is in). This string is followed by a second "-" dash and from 8 to 32
     * additional lowercase letters or digits.</p> </li> </ul>
     */
    inline void SetDestinationParentId(Aws::String&& value) { m_destinationParentIdHasBeenSet = true; m_destinationParentId = std::move(value); }

    /**
     * <p>The unique identifier (ID) of the root or organizational unit that you want
     * to move the account to.</p> <p>The <a
     * href="http://wikipedia.org/wiki/regex">regex pattern</a> for a parent ID string
     * requires one of the following:</p> <ul> <li> <p> <b>Root</b> - A string that
     * begins with "r-" followed by from 4 to 32 lowercase letters or digits.</p> </li>
     * <li> <p> <b>Organizational unit (OU)</b> - A string that begins with "ou-"
     * followed by from 4 to 32 lowercase letters or digits (the ID of the root that
     * the OU is in). This string is followed by a second "-" dash and from 8 to 32
     * additional lowercase letters or digits.</p> </li> </ul>
     */
    inline void SetDestinationParentId(const char* value) { m_destinationParentIdHasBeenSet = true; m_destinationParentId.assign(value); }

    /**
     * <p>The unique identifier (ID) of the root or organizational unit that you want
     * to move the account to.</p> <p>The <a
     * href="http://wikipedia.org/wiki/regex">regex pattern</a> for a parent ID string
     * requires one of the following:</p> <ul> <li> <p> <b>Root</b> - A string that
     * begins with "r-" followed by from 4 to 32 lowercase letters or digits.</p> </li>
     * <li> <p> <b>Organizational unit (OU)</b> - A string that begins with "ou-"
     * followed by from 4 to 32 lowercase letters or digits (the ID of the root that
     * the OU is in). This string is followed by a second "-" dash and from 8 to 32
     * additional lowercase letters or digits.</p> </li> </ul>
     */
    inline MoveAccountRequest& WithDestinationParentId(const Aws::String& value) { SetDestinationParentId(value); return *this;}

    /**
     * <p>The unique identifier (ID) of the root or organizational unit that you want
     * to move the account to.</p> <p>The <a
     * href="http://wikipedia.org/wiki/regex">regex pattern</a> for a parent ID string
     * requires one of the following:</p> <ul> <li> <p> <b>Root</b> - A string that
     * begins with "r-" followed by from 4 to 32 lowercase letters or digits.</p> </li>
     * <li> <p> <b>Organizational unit (OU)</b> - A string that begins with "ou-"
     * followed by from 4 to 32 lowercase letters or digits (the ID of the root that
     * the OU is in). This string is followed by a second "-" dash and from 8 to 32
     * additional lowercase letters or digits.</p> </li> </ul>
     */
    inline MoveAccountRequest& WithDestinationParentId(Aws::String&& value) { SetDestinationParentId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier (ID) of the root or organizational unit that you want
     * to move the account to.</p> <p>The <a
     * href="http://wikipedia.org/wiki/regex">regex pattern</a> for a parent ID string
     * requires one of the following:</p> <ul> <li> <p> <b>Root</b> - A string that
     * begins with "r-" followed by from 4 to 32 lowercase letters or digits.</p> </li>
     * <li> <p> <b>Organizational unit (OU)</b> - A string that begins with "ou-"
     * followed by from 4 to 32 lowercase letters or digits (the ID of the root that
     * the OU is in). This string is followed by a second "-" dash and from 8 to 32
     * additional lowercase letters or digits.</p> </li> </ul>
     */
    inline MoveAccountRequest& WithDestinationParentId(const char* value) { SetDestinationParentId(value); return *this;}

  private:

    Aws::String m_accountId;
    bool m_accountIdHasBeenSet = false;

    Aws::String m_sourceParentId;
    bool m_sourceParentIdHasBeenSet = false;

    Aws::String m_destinationParentId;
    bool m_destinationParentIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Organizations
} // namespace Aws

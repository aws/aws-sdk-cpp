/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
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
namespace SecurityHub
{
namespace Model
{

  /**
   * <p> The target account, organizational unit, or the root that is associated with
   * an Security Hub configuration. The configuration can be a configuration policy
   * or self-managed behavior. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/Target">AWS
   * API Reference</a></p>
   */
  class Target
  {
  public:
    AWS_SECURITYHUB_API Target();
    AWS_SECURITYHUB_API Target(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Target& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p> The Amazon Web Services account ID of the target account. </p>
     */
    inline const Aws::String& GetAccountId() const{ return m_accountId; }

    /**
     * <p> The Amazon Web Services account ID of the target account. </p>
     */
    inline bool AccountIdHasBeenSet() const { return m_accountIdHasBeenSet; }

    /**
     * <p> The Amazon Web Services account ID of the target account. </p>
     */
    inline void SetAccountId(const Aws::String& value) { m_accountIdHasBeenSet = true; m_accountId = value; }

    /**
     * <p> The Amazon Web Services account ID of the target account. </p>
     */
    inline void SetAccountId(Aws::String&& value) { m_accountIdHasBeenSet = true; m_accountId = std::move(value); }

    /**
     * <p> The Amazon Web Services account ID of the target account. </p>
     */
    inline void SetAccountId(const char* value) { m_accountIdHasBeenSet = true; m_accountId.assign(value); }

    /**
     * <p> The Amazon Web Services account ID of the target account. </p>
     */
    inline Target& WithAccountId(const Aws::String& value) { SetAccountId(value); return *this;}

    /**
     * <p> The Amazon Web Services account ID of the target account. </p>
     */
    inline Target& WithAccountId(Aws::String&& value) { SetAccountId(std::move(value)); return *this;}

    /**
     * <p> The Amazon Web Services account ID of the target account. </p>
     */
    inline Target& WithAccountId(const char* value) { SetAccountId(value); return *this;}


    /**
     * <p> The organizational unit ID of the target organizational unit. </p>
     */
    inline const Aws::String& GetOrganizationalUnitId() const{ return m_organizationalUnitId; }

    /**
     * <p> The organizational unit ID of the target organizational unit. </p>
     */
    inline bool OrganizationalUnitIdHasBeenSet() const { return m_organizationalUnitIdHasBeenSet; }

    /**
     * <p> The organizational unit ID of the target organizational unit. </p>
     */
    inline void SetOrganizationalUnitId(const Aws::String& value) { m_organizationalUnitIdHasBeenSet = true; m_organizationalUnitId = value; }

    /**
     * <p> The organizational unit ID of the target organizational unit. </p>
     */
    inline void SetOrganizationalUnitId(Aws::String&& value) { m_organizationalUnitIdHasBeenSet = true; m_organizationalUnitId = std::move(value); }

    /**
     * <p> The organizational unit ID of the target organizational unit. </p>
     */
    inline void SetOrganizationalUnitId(const char* value) { m_organizationalUnitIdHasBeenSet = true; m_organizationalUnitId.assign(value); }

    /**
     * <p> The organizational unit ID of the target organizational unit. </p>
     */
    inline Target& WithOrganizationalUnitId(const Aws::String& value) { SetOrganizationalUnitId(value); return *this;}

    /**
     * <p> The organizational unit ID of the target organizational unit. </p>
     */
    inline Target& WithOrganizationalUnitId(Aws::String&& value) { SetOrganizationalUnitId(std::move(value)); return *this;}

    /**
     * <p> The organizational unit ID of the target organizational unit. </p>
     */
    inline Target& WithOrganizationalUnitId(const char* value) { SetOrganizationalUnitId(value); return *this;}


    /**
     * <p> The ID of the organization root. </p>
     */
    inline const Aws::String& GetRootId() const{ return m_rootId; }

    /**
     * <p> The ID of the organization root. </p>
     */
    inline bool RootIdHasBeenSet() const { return m_rootIdHasBeenSet; }

    /**
     * <p> The ID of the organization root. </p>
     */
    inline void SetRootId(const Aws::String& value) { m_rootIdHasBeenSet = true; m_rootId = value; }

    /**
     * <p> The ID of the organization root. </p>
     */
    inline void SetRootId(Aws::String&& value) { m_rootIdHasBeenSet = true; m_rootId = std::move(value); }

    /**
     * <p> The ID of the organization root. </p>
     */
    inline void SetRootId(const char* value) { m_rootIdHasBeenSet = true; m_rootId.assign(value); }

    /**
     * <p> The ID of the organization root. </p>
     */
    inline Target& WithRootId(const Aws::String& value) { SetRootId(value); return *this;}

    /**
     * <p> The ID of the organization root. </p>
     */
    inline Target& WithRootId(Aws::String&& value) { SetRootId(std::move(value)); return *this;}

    /**
     * <p> The ID of the organization root. </p>
     */
    inline Target& WithRootId(const char* value) { SetRootId(value); return *this;}

  private:

    Aws::String m_accountId;
    bool m_accountIdHasBeenSet = false;

    Aws::String m_organizationalUnitId;
    bool m_organizationalUnitIdHasBeenSet = false;

    Aws::String m_rootId;
    bool m_rootIdHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws

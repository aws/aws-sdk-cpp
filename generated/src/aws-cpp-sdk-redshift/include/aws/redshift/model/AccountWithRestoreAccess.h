/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/redshift/Redshift_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Xml
{
  class XmlNode;
} // namespace Xml
} // namespace Utils
namespace Redshift
{
namespace Model
{

  /**
   * <p>Describes an Amazon Web Services account authorized to restore a
   * snapshot.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/redshift-2012-12-01/AccountWithRestoreAccess">AWS
   * API Reference</a></p>
   */
  class AccountWithRestoreAccess
  {
  public:
    AWS_REDSHIFT_API AccountWithRestoreAccess() = default;
    AWS_REDSHIFT_API AccountWithRestoreAccess(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_REDSHIFT_API AccountWithRestoreAccess& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_REDSHIFT_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_REDSHIFT_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The identifier of an Amazon Web Services account authorized to restore a
     * snapshot.</p>
     */
    inline const Aws::String& GetAccountId() const { return m_accountId; }
    inline bool AccountIdHasBeenSet() const { return m_accountIdHasBeenSet; }
    template<typename AccountIdT = Aws::String>
    void SetAccountId(AccountIdT&& value) { m_accountIdHasBeenSet = true; m_accountId = std::forward<AccountIdT>(value); }
    template<typename AccountIdT = Aws::String>
    AccountWithRestoreAccess& WithAccountId(AccountIdT&& value) { SetAccountId(std::forward<AccountIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of an Amazon Web Services support account authorized to
     * restore a snapshot. For Amazon Web Services Support, the identifier is
     * <code>amazon-redshift-support</code>. </p>
     */
    inline const Aws::String& GetAccountAlias() const { return m_accountAlias; }
    inline bool AccountAliasHasBeenSet() const { return m_accountAliasHasBeenSet; }
    template<typename AccountAliasT = Aws::String>
    void SetAccountAlias(AccountAliasT&& value) { m_accountAliasHasBeenSet = true; m_accountAlias = std::forward<AccountAliasT>(value); }
    template<typename AccountAliasT = Aws::String>
    AccountWithRestoreAccess& WithAccountAlias(AccountAliasT&& value) { SetAccountAlias(std::forward<AccountAliasT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_accountId;
    bool m_accountIdHasBeenSet = false;

    Aws::String m_accountAlias;
    bool m_accountAliasHasBeenSet = false;
  };

} // namespace Model
} // namespace Redshift
} // namespace Aws

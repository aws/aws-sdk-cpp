/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/s3control/S3Control_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/s3control/model/ScopePermission.h>
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
namespace S3Control
{
namespace Model
{

  /**
   * <p>You can use the access point scope to restrict access to specific prefixes,
   * API operations, or a combination of both.</p> <p>For more information, see <a
   * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/access-points-directory-buckets-manage-scope.html">Manage
   * the scope of your access points for directory buckets</a>.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/s3control-2018-08-20/Scope">AWS API
   * Reference</a></p>
   */
  class Scope
  {
  public:
    AWS_S3CONTROL_API Scope() = default;
    AWS_S3CONTROL_API Scope(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_S3CONTROL_API Scope& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_S3CONTROL_API void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;


    ///@{
    /**
     * <p>You can specify any amount of prefixes, but the total length of characters of
     * all prefixes must be less than 256 bytes in size.</p>
     */
    inline const Aws::Vector<Aws::String>& GetPrefixes() const { return m_prefixes; }
    inline bool PrefixesHasBeenSet() const { return m_prefixesHasBeenSet; }
    template<typename PrefixesT = Aws::Vector<Aws::String>>
    void SetPrefixes(PrefixesT&& value) { m_prefixesHasBeenSet = true; m_prefixes = std::forward<PrefixesT>(value); }
    template<typename PrefixesT = Aws::Vector<Aws::String>>
    Scope& WithPrefixes(PrefixesT&& value) { SetPrefixes(std::forward<PrefixesT>(value)); return *this;}
    template<typename PrefixesT = Aws::String>
    Scope& AddPrefixes(PrefixesT&& value) { m_prefixesHasBeenSet = true; m_prefixes.emplace_back(std::forward<PrefixesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>You can include one or more API operations as permissions.</p>
     */
    inline const Aws::Vector<ScopePermission>& GetPermissions() const { return m_permissions; }
    inline bool PermissionsHasBeenSet() const { return m_permissionsHasBeenSet; }
    template<typename PermissionsT = Aws::Vector<ScopePermission>>
    void SetPermissions(PermissionsT&& value) { m_permissionsHasBeenSet = true; m_permissions = std::forward<PermissionsT>(value); }
    template<typename PermissionsT = Aws::Vector<ScopePermission>>
    Scope& WithPermissions(PermissionsT&& value) { SetPermissions(std::forward<PermissionsT>(value)); return *this;}
    inline Scope& AddPermissions(ScopePermission value) { m_permissionsHasBeenSet = true; m_permissions.push_back(value); return *this; }
    ///@}
  private:

    Aws::Vector<Aws::String> m_prefixes;
    bool m_prefixesHasBeenSet = false;

    Aws::Vector<ScopePermission> m_permissions;
    bool m_permissionsHasBeenSet = false;
  };

} // namespace Model
} // namespace S3Control
} // namespace Aws

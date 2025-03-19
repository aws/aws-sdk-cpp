/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/redshift/Redshift_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/redshift/model/ReadWriteAccess.h>
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
   * <p>A list of scopes set up for S3 Access Grants integration.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/redshift-2012-12-01/S3AccessGrantsScopeUnion">AWS
   * API Reference</a></p>
   */
  class S3AccessGrantsScopeUnion
  {
  public:
    AWS_REDSHIFT_API S3AccessGrantsScopeUnion() = default;
    AWS_REDSHIFT_API S3AccessGrantsScopeUnion(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_REDSHIFT_API S3AccessGrantsScopeUnion& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_REDSHIFT_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_REDSHIFT_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The S3 Access Grants scope.</p>
     */
    inline const ReadWriteAccess& GetReadWriteAccess() const { return m_readWriteAccess; }
    inline bool ReadWriteAccessHasBeenSet() const { return m_readWriteAccessHasBeenSet; }
    template<typename ReadWriteAccessT = ReadWriteAccess>
    void SetReadWriteAccess(ReadWriteAccessT&& value) { m_readWriteAccessHasBeenSet = true; m_readWriteAccess = std::forward<ReadWriteAccessT>(value); }
    template<typename ReadWriteAccessT = ReadWriteAccess>
    S3AccessGrantsScopeUnion& WithReadWriteAccess(ReadWriteAccessT&& value) { SetReadWriteAccess(std::forward<ReadWriteAccessT>(value)); return *this;}
    ///@}
  private:

    ReadWriteAccess m_readWriteAccess;
    bool m_readWriteAccessHasBeenSet = false;
  };

} // namespace Model
} // namespace Redshift
} // namespace Aws

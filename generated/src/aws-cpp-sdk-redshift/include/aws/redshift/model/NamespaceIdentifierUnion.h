/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/redshift/Redshift_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/redshift/model/ServerlessIdentifier.h>
#include <aws/redshift/model/ProvisionedIdentifier.h>
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
   * <p>Object to store union of values for a provisioned cluster or serverless
   * namespace’s identifier.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/redshift-2012-12-01/NamespaceIdentifierUnion">AWS
   * API Reference</a></p>
   */
  class NamespaceIdentifierUnion
  {
  public:
    AWS_REDSHIFT_API NamespaceIdentifierUnion();
    AWS_REDSHIFT_API NamespaceIdentifierUnion(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_REDSHIFT_API NamespaceIdentifierUnion& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_REDSHIFT_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_REDSHIFT_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The identifier for a serverless namespace.</p>
     */
    inline const ServerlessIdentifier& GetServerlessIdentifier() const{ return m_serverlessIdentifier; }
    inline bool ServerlessIdentifierHasBeenSet() const { return m_serverlessIdentifierHasBeenSet; }
    inline void SetServerlessIdentifier(const ServerlessIdentifier& value) { m_serverlessIdentifierHasBeenSet = true; m_serverlessIdentifier = value; }
    inline void SetServerlessIdentifier(ServerlessIdentifier&& value) { m_serverlessIdentifierHasBeenSet = true; m_serverlessIdentifier = std::move(value); }
    inline NamespaceIdentifierUnion& WithServerlessIdentifier(const ServerlessIdentifier& value) { SetServerlessIdentifier(value); return *this;}
    inline NamespaceIdentifierUnion& WithServerlessIdentifier(ServerlessIdentifier&& value) { SetServerlessIdentifier(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier for a provisioned cluster.</p>
     */
    inline const ProvisionedIdentifier& GetProvisionedIdentifier() const{ return m_provisionedIdentifier; }
    inline bool ProvisionedIdentifierHasBeenSet() const { return m_provisionedIdentifierHasBeenSet; }
    inline void SetProvisionedIdentifier(const ProvisionedIdentifier& value) { m_provisionedIdentifierHasBeenSet = true; m_provisionedIdentifier = value; }
    inline void SetProvisionedIdentifier(ProvisionedIdentifier&& value) { m_provisionedIdentifierHasBeenSet = true; m_provisionedIdentifier = std::move(value); }
    inline NamespaceIdentifierUnion& WithProvisionedIdentifier(const ProvisionedIdentifier& value) { SetProvisionedIdentifier(value); return *this;}
    inline NamespaceIdentifierUnion& WithProvisionedIdentifier(ProvisionedIdentifier&& value) { SetProvisionedIdentifier(std::move(value)); return *this;}
    ///@}
  private:

    ServerlessIdentifier m_serverlessIdentifier;
    bool m_serverlessIdentifierHasBeenSet = false;

    ProvisionedIdentifier m_provisionedIdentifier;
    bool m_provisionedIdentifierHasBeenSet = false;
  };

} // namespace Model
} // namespace Redshift
} // namespace Aws

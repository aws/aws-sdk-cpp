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
   * <p>The identifier for a serverless namespace.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/redshift-2012-12-01/ServerlessIdentifier">AWS
   * API Reference</a></p>
   */
  class ServerlessIdentifier
  {
  public:
    AWS_REDSHIFT_API ServerlessIdentifier() = default;
    AWS_REDSHIFT_API ServerlessIdentifier(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_REDSHIFT_API ServerlessIdentifier& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_REDSHIFT_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_REDSHIFT_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The unique identifier for the serverless namespace.</p>
     */
    inline const Aws::String& GetNamespaceIdentifier() const { return m_namespaceIdentifier; }
    inline bool NamespaceIdentifierHasBeenSet() const { return m_namespaceIdentifierHasBeenSet; }
    template<typename NamespaceIdentifierT = Aws::String>
    void SetNamespaceIdentifier(NamespaceIdentifierT&& value) { m_namespaceIdentifierHasBeenSet = true; m_namespaceIdentifier = std::forward<NamespaceIdentifierT>(value); }
    template<typename NamespaceIdentifierT = Aws::String>
    ServerlessIdentifier& WithNamespaceIdentifier(NamespaceIdentifierT&& value) { SetNamespaceIdentifier(std::forward<NamespaceIdentifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier for the workgroup associated with the serverless
     * namespace.</p>
     */
    inline const Aws::String& GetWorkgroupIdentifier() const { return m_workgroupIdentifier; }
    inline bool WorkgroupIdentifierHasBeenSet() const { return m_workgroupIdentifierHasBeenSet; }
    template<typename WorkgroupIdentifierT = Aws::String>
    void SetWorkgroupIdentifier(WorkgroupIdentifierT&& value) { m_workgroupIdentifierHasBeenSet = true; m_workgroupIdentifier = std::forward<WorkgroupIdentifierT>(value); }
    template<typename WorkgroupIdentifierT = Aws::String>
    ServerlessIdentifier& WithWorkgroupIdentifier(WorkgroupIdentifierT&& value) { SetWorkgroupIdentifier(std::forward<WorkgroupIdentifierT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_namespaceIdentifier;
    bool m_namespaceIdentifierHasBeenSet = false;

    Aws::String m_workgroupIdentifier;
    bool m_workgroupIdentifierHasBeenSet = false;
  };

} // namespace Model
} // namespace Redshift
} // namespace Aws

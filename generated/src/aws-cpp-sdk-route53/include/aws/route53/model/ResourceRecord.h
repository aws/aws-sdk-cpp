/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/route53/Route53_EXPORTS.h>
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
namespace Route53
{
namespace Model
{

  /**
   * <p>Information specific to the resource record.</p>  <p>If you're creating
   * an alias resource record set, omit <code>ResourceRecord</code>.</p>
   * <p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/route53-2013-04-01/ResourceRecord">AWS
   * API Reference</a></p>
   */
  class ResourceRecord
  {
  public:
    AWS_ROUTE53_API ResourceRecord();
    AWS_ROUTE53_API ResourceRecord(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_ROUTE53_API ResourceRecord& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_ROUTE53_API void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;


    /**
     * <p>The current or new DNS record value, not to exceed 4,000 characters. In the
     * case of a <code>DELETE</code> action, if the current value does not match the
     * actual value, an error is returned. For descriptions about how to format
     * <code>Value</code> for different record types, see <a
     * href="https://docs.aws.amazon.com/Route53/latest/DeveloperGuide/ResourceRecordTypes.html">Supported
     * DNS Resource Record Types</a> in the <i>Amazon Route 53 Developer Guide</i>.</p>
     * <p>You can specify more than one value for all record types except
     * <code>CNAME</code> and <code>SOA</code>. </p>  <p>If you're creating an
     * alias resource record set, omit <code>Value</code>.</p> 
     */
    inline const Aws::String& GetValue() const{ return m_value; }

    /**
     * <p>The current or new DNS record value, not to exceed 4,000 characters. In the
     * case of a <code>DELETE</code> action, if the current value does not match the
     * actual value, an error is returned. For descriptions about how to format
     * <code>Value</code> for different record types, see <a
     * href="https://docs.aws.amazon.com/Route53/latest/DeveloperGuide/ResourceRecordTypes.html">Supported
     * DNS Resource Record Types</a> in the <i>Amazon Route 53 Developer Guide</i>.</p>
     * <p>You can specify more than one value for all record types except
     * <code>CNAME</code> and <code>SOA</code>. </p>  <p>If you're creating an
     * alias resource record set, omit <code>Value</code>.</p> 
     */
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }

    /**
     * <p>The current or new DNS record value, not to exceed 4,000 characters. In the
     * case of a <code>DELETE</code> action, if the current value does not match the
     * actual value, an error is returned. For descriptions about how to format
     * <code>Value</code> for different record types, see <a
     * href="https://docs.aws.amazon.com/Route53/latest/DeveloperGuide/ResourceRecordTypes.html">Supported
     * DNS Resource Record Types</a> in the <i>Amazon Route 53 Developer Guide</i>.</p>
     * <p>You can specify more than one value for all record types except
     * <code>CNAME</code> and <code>SOA</code>. </p>  <p>If you're creating an
     * alias resource record set, omit <code>Value</code>.</p> 
     */
    inline void SetValue(const Aws::String& value) { m_valueHasBeenSet = true; m_value = value; }

    /**
     * <p>The current or new DNS record value, not to exceed 4,000 characters. In the
     * case of a <code>DELETE</code> action, if the current value does not match the
     * actual value, an error is returned. For descriptions about how to format
     * <code>Value</code> for different record types, see <a
     * href="https://docs.aws.amazon.com/Route53/latest/DeveloperGuide/ResourceRecordTypes.html">Supported
     * DNS Resource Record Types</a> in the <i>Amazon Route 53 Developer Guide</i>.</p>
     * <p>You can specify more than one value for all record types except
     * <code>CNAME</code> and <code>SOA</code>. </p>  <p>If you're creating an
     * alias resource record set, omit <code>Value</code>.</p> 
     */
    inline void SetValue(Aws::String&& value) { m_valueHasBeenSet = true; m_value = std::move(value); }

    /**
     * <p>The current or new DNS record value, not to exceed 4,000 characters. In the
     * case of a <code>DELETE</code> action, if the current value does not match the
     * actual value, an error is returned. For descriptions about how to format
     * <code>Value</code> for different record types, see <a
     * href="https://docs.aws.amazon.com/Route53/latest/DeveloperGuide/ResourceRecordTypes.html">Supported
     * DNS Resource Record Types</a> in the <i>Amazon Route 53 Developer Guide</i>.</p>
     * <p>You can specify more than one value for all record types except
     * <code>CNAME</code> and <code>SOA</code>. </p>  <p>If you're creating an
     * alias resource record set, omit <code>Value</code>.</p> 
     */
    inline void SetValue(const char* value) { m_valueHasBeenSet = true; m_value.assign(value); }

    /**
     * <p>The current or new DNS record value, not to exceed 4,000 characters. In the
     * case of a <code>DELETE</code> action, if the current value does not match the
     * actual value, an error is returned. For descriptions about how to format
     * <code>Value</code> for different record types, see <a
     * href="https://docs.aws.amazon.com/Route53/latest/DeveloperGuide/ResourceRecordTypes.html">Supported
     * DNS Resource Record Types</a> in the <i>Amazon Route 53 Developer Guide</i>.</p>
     * <p>You can specify more than one value for all record types except
     * <code>CNAME</code> and <code>SOA</code>. </p>  <p>If you're creating an
     * alias resource record set, omit <code>Value</code>.</p> 
     */
    inline ResourceRecord& WithValue(const Aws::String& value) { SetValue(value); return *this;}

    /**
     * <p>The current or new DNS record value, not to exceed 4,000 characters. In the
     * case of a <code>DELETE</code> action, if the current value does not match the
     * actual value, an error is returned. For descriptions about how to format
     * <code>Value</code> for different record types, see <a
     * href="https://docs.aws.amazon.com/Route53/latest/DeveloperGuide/ResourceRecordTypes.html">Supported
     * DNS Resource Record Types</a> in the <i>Amazon Route 53 Developer Guide</i>.</p>
     * <p>You can specify more than one value for all record types except
     * <code>CNAME</code> and <code>SOA</code>. </p>  <p>If you're creating an
     * alias resource record set, omit <code>Value</code>.</p> 
     */
    inline ResourceRecord& WithValue(Aws::String&& value) { SetValue(std::move(value)); return *this;}

    /**
     * <p>The current or new DNS record value, not to exceed 4,000 characters. In the
     * case of a <code>DELETE</code> action, if the current value does not match the
     * actual value, an error is returned. For descriptions about how to format
     * <code>Value</code> for different record types, see <a
     * href="https://docs.aws.amazon.com/Route53/latest/DeveloperGuide/ResourceRecordTypes.html">Supported
     * DNS Resource Record Types</a> in the <i>Amazon Route 53 Developer Guide</i>.</p>
     * <p>You can specify more than one value for all record types except
     * <code>CNAME</code> and <code>SOA</code>. </p>  <p>If you're creating an
     * alias resource record set, omit <code>Value</code>.</p> 
     */
    inline ResourceRecord& WithValue(const char* value) { SetValue(value); return *this;}

  private:

    Aws::String m_value;
    bool m_valueHasBeenSet = false;
  };

} // namespace Model
} // namespace Route53
} // namespace Aws

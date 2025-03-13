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
   * <p>A complex type that contains information about a tag that you want to add or
   * edit for the specified health check or hosted zone.</p><p><h3>See Also:</h3>  
   * <a href="http://docs.aws.amazon.com/goto/WebAPI/route53-2013-04-01/Tag">AWS API
   * Reference</a></p>
   */
  class Tag
  {
  public:
    AWS_ROUTE53_API Tag() = default;
    AWS_ROUTE53_API Tag(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_ROUTE53_API Tag& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_ROUTE53_API void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;


    ///@{
    /**
     * <p>The value of <code>Key</code> depends on the operation that you want to
     * perform:</p> <ul> <li> <p> <b>Add a tag to a health check or hosted zone</b>:
     * <code>Key</code> is the name that you want to give the new tag.</p> </li> <li>
     * <p> <b>Edit a tag</b>: <code>Key</code> is the name of the tag that you want to
     * change the <code>Value</code> for.</p> </li> <li> <p> <b> Delete a key</b>:
     * <code>Key</code> is the name of the tag you want to remove.</p> </li> <li> <p>
     * <b>Give a name to a health check</b>: Edit the default <code>Name</code> tag. In
     * the Amazon Route 53 console, the list of your health checks includes a
     * <b>Name</b> column that lets you see the name that you've given to each health
     * check.</p> </li> </ul>
     */
    inline const Aws::String& GetKey() const { return m_key; }
    inline bool KeyHasBeenSet() const { return m_keyHasBeenSet; }
    template<typename KeyT = Aws::String>
    void SetKey(KeyT&& value) { m_keyHasBeenSet = true; m_key = std::forward<KeyT>(value); }
    template<typename KeyT = Aws::String>
    Tag& WithKey(KeyT&& value) { SetKey(std::forward<KeyT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The value of <code>Value</code> depends on the operation that you want to
     * perform:</p> <ul> <li> <p> <b>Add a tag to a health check or hosted zone</b>:
     * <code>Value</code> is the value that you want to give the new tag.</p> </li>
     * <li> <p> <b>Edit a tag</b>: <code>Value</code> is the new value that you want to
     * assign the tag.</p> </li> </ul>
     */
    inline const Aws::String& GetValue() const { return m_value; }
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }
    template<typename ValueT = Aws::String>
    void SetValue(ValueT&& value) { m_valueHasBeenSet = true; m_value = std::forward<ValueT>(value); }
    template<typename ValueT = Aws::String>
    Tag& WithValue(ValueT&& value) { SetValue(std::forward<ValueT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_key;
    bool m_keyHasBeenSet = false;

    Aws::String m_value;
    bool m_valueHasBeenSet = false;
  };

} // namespace Model
} // namespace Route53
} // namespace Aws

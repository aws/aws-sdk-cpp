/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/s3/S3_EXPORTS.h>
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
namespace S3
{
namespace Model
{

  /**
   * <p>Container for all (if there are any) keys between Prefix and the next
   * occurrence of the string specified by a delimiter. CommonPrefixes lists keys
   * that act like subdirectories in the directory specified by Prefix. For example,
   * if the prefix is notes/ and the delimiter is a slash (/) as in
   * notes/summer/july, the common prefix is notes/summer/. </p><p><h3>See Also:</h3>
   * <a href="http://docs.aws.amazon.com/goto/WebAPI/s3-2006-03-01/CommonPrefix">AWS
   * API Reference</a></p>
   */
  class CommonPrefix
  {
  public:
    AWS_S3_API CommonPrefix() = default;
    AWS_S3_API CommonPrefix(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_S3_API CommonPrefix& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_S3_API void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;


    ///@{
    /**
     * <p>Container for the specified common prefix.</p>
     */
    inline const Aws::String& GetPrefix() const { return m_prefix; }
    inline bool PrefixHasBeenSet() const { return m_prefixHasBeenSet; }
    template<typename PrefixT = Aws::String>
    void SetPrefix(PrefixT&& value) { m_prefixHasBeenSet = true; m_prefix = std::forward<PrefixT>(value); }
    template<typename PrefixT = Aws::String>
    CommonPrefix& WithPrefix(PrefixT&& value) { SetPrefix(std::forward<PrefixT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_prefix;
    bool m_prefixHasBeenSet = false;
  };

} // namespace Model
} // namespace S3
} // namespace Aws

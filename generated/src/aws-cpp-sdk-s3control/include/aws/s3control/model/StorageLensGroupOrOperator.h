/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/s3control/S3Control_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/s3control/model/MatchObjectAge.h>
#include <aws/s3control/model/MatchObjectSize.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/s3control/model/S3Tag.h>
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
   * <p>A container element for specifying <code>Or</code> rule conditions. The rule
   * conditions determine the subset of objects to which the <code>Or</code> rule
   * applies. Objects can match any of the listed filter conditions, which are joined
   * by the <code>Or</code> logical operator. Only one of each filter condition is
   * allowed.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/s3control-2018-08-20/StorageLensGroupOrOperator">AWS
   * API Reference</a></p>
   */
  class StorageLensGroupOrOperator
  {
  public:
    AWS_S3CONTROL_API StorageLensGroupOrOperator() = default;
    AWS_S3CONTROL_API StorageLensGroupOrOperator(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_S3CONTROL_API StorageLensGroupOrOperator& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_S3CONTROL_API void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;


    ///@{
    /**
     * <p> Filters objects that match any of the specified prefixes. </p>
     */
    inline const Aws::Vector<Aws::String>& GetMatchAnyPrefix() const { return m_matchAnyPrefix; }
    inline bool MatchAnyPrefixHasBeenSet() const { return m_matchAnyPrefixHasBeenSet; }
    template<typename MatchAnyPrefixT = Aws::Vector<Aws::String>>
    void SetMatchAnyPrefix(MatchAnyPrefixT&& value) { m_matchAnyPrefixHasBeenSet = true; m_matchAnyPrefix = std::forward<MatchAnyPrefixT>(value); }
    template<typename MatchAnyPrefixT = Aws::Vector<Aws::String>>
    StorageLensGroupOrOperator& WithMatchAnyPrefix(MatchAnyPrefixT&& value) { SetMatchAnyPrefix(std::forward<MatchAnyPrefixT>(value)); return *this;}
    template<typename MatchAnyPrefixT = Aws::String>
    StorageLensGroupOrOperator& AddMatchAnyPrefix(MatchAnyPrefixT&& value) { m_matchAnyPrefixHasBeenSet = true; m_matchAnyPrefix.emplace_back(std::forward<MatchAnyPrefixT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> Filters objects that match any of the specified suffixes. </p>
     */
    inline const Aws::Vector<Aws::String>& GetMatchAnySuffix() const { return m_matchAnySuffix; }
    inline bool MatchAnySuffixHasBeenSet() const { return m_matchAnySuffixHasBeenSet; }
    template<typename MatchAnySuffixT = Aws::Vector<Aws::String>>
    void SetMatchAnySuffix(MatchAnySuffixT&& value) { m_matchAnySuffixHasBeenSet = true; m_matchAnySuffix = std::forward<MatchAnySuffixT>(value); }
    template<typename MatchAnySuffixT = Aws::Vector<Aws::String>>
    StorageLensGroupOrOperator& WithMatchAnySuffix(MatchAnySuffixT&& value) { SetMatchAnySuffix(std::forward<MatchAnySuffixT>(value)); return *this;}
    template<typename MatchAnySuffixT = Aws::String>
    StorageLensGroupOrOperator& AddMatchAnySuffix(MatchAnySuffixT&& value) { m_matchAnySuffixHasBeenSet = true; m_matchAnySuffix.emplace_back(std::forward<MatchAnySuffixT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> Filters objects that match any of the specified S3 object tags. </p>
     */
    inline const Aws::Vector<S3Tag>& GetMatchAnyTag() const { return m_matchAnyTag; }
    inline bool MatchAnyTagHasBeenSet() const { return m_matchAnyTagHasBeenSet; }
    template<typename MatchAnyTagT = Aws::Vector<S3Tag>>
    void SetMatchAnyTag(MatchAnyTagT&& value) { m_matchAnyTagHasBeenSet = true; m_matchAnyTag = std::forward<MatchAnyTagT>(value); }
    template<typename MatchAnyTagT = Aws::Vector<S3Tag>>
    StorageLensGroupOrOperator& WithMatchAnyTag(MatchAnyTagT&& value) { SetMatchAnyTag(std::forward<MatchAnyTagT>(value)); return *this;}
    template<typename MatchAnyTagT = S3Tag>
    StorageLensGroupOrOperator& AddMatchAnyTag(MatchAnyTagT&& value) { m_matchAnyTagHasBeenSet = true; m_matchAnyTag.emplace_back(std::forward<MatchAnyTagT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> Filters objects that match the specified object age range. </p>
     */
    inline const MatchObjectAge& GetMatchObjectAge() const { return m_matchObjectAge; }
    inline bool MatchObjectAgeHasBeenSet() const { return m_matchObjectAgeHasBeenSet; }
    template<typename MatchObjectAgeT = MatchObjectAge>
    void SetMatchObjectAge(MatchObjectAgeT&& value) { m_matchObjectAgeHasBeenSet = true; m_matchObjectAge = std::forward<MatchObjectAgeT>(value); }
    template<typename MatchObjectAgeT = MatchObjectAge>
    StorageLensGroupOrOperator& WithMatchObjectAge(MatchObjectAgeT&& value) { SetMatchObjectAge(std::forward<MatchObjectAgeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> Filters objects that match the specified object size range. </p>
     */
    inline const MatchObjectSize& GetMatchObjectSize() const { return m_matchObjectSize; }
    inline bool MatchObjectSizeHasBeenSet() const { return m_matchObjectSizeHasBeenSet; }
    template<typename MatchObjectSizeT = MatchObjectSize>
    void SetMatchObjectSize(MatchObjectSizeT&& value) { m_matchObjectSizeHasBeenSet = true; m_matchObjectSize = std::forward<MatchObjectSizeT>(value); }
    template<typename MatchObjectSizeT = MatchObjectSize>
    StorageLensGroupOrOperator& WithMatchObjectSize(MatchObjectSizeT&& value) { SetMatchObjectSize(std::forward<MatchObjectSizeT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<Aws::String> m_matchAnyPrefix;
    bool m_matchAnyPrefixHasBeenSet = false;

    Aws::Vector<Aws::String> m_matchAnySuffix;
    bool m_matchAnySuffixHasBeenSet = false;

    Aws::Vector<S3Tag> m_matchAnyTag;
    bool m_matchAnyTagHasBeenSet = false;

    MatchObjectAge m_matchObjectAge;
    bool m_matchObjectAgeHasBeenSet = false;

    MatchObjectSize m_matchObjectSize;
    bool m_matchObjectSizeHasBeenSet = false;
  };

} // namespace Model
} // namespace S3Control
} // namespace Aws

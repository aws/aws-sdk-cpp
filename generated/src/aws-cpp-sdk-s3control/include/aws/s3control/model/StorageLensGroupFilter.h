/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/s3control/S3Control_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/s3control/model/MatchObjectAge.h>
#include <aws/s3control/model/MatchObjectSize.h>
#include <aws/s3control/model/StorageLensGroupAndOperator.h>
#include <aws/s3control/model/StorageLensGroupOrOperator.h>
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
   * <p>The filter element sets the criteria for the Storage Lens group data that is
   * displayed. For multiple filter conditions, the <code>AND</code> or
   * <code>OR</code> logical operator is used.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/s3control-2018-08-20/StorageLensGroupFilter">AWS
   * API Reference</a></p>
   */
  class StorageLensGroupFilter
  {
  public:
    AWS_S3CONTROL_API StorageLensGroupFilter() = default;
    AWS_S3CONTROL_API StorageLensGroupFilter(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_S3CONTROL_API StorageLensGroupFilter& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_S3CONTROL_API void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;


    ///@{
    /**
     * <p> Contains a list of prefixes. At least one prefix must be specified. Up to 10
     * prefixes are allowed. </p>
     */
    inline const Aws::Vector<Aws::String>& GetMatchAnyPrefix() const { return m_matchAnyPrefix; }
    inline bool MatchAnyPrefixHasBeenSet() const { return m_matchAnyPrefixHasBeenSet; }
    template<typename MatchAnyPrefixT = Aws::Vector<Aws::String>>
    void SetMatchAnyPrefix(MatchAnyPrefixT&& value) { m_matchAnyPrefixHasBeenSet = true; m_matchAnyPrefix = std::forward<MatchAnyPrefixT>(value); }
    template<typename MatchAnyPrefixT = Aws::Vector<Aws::String>>
    StorageLensGroupFilter& WithMatchAnyPrefix(MatchAnyPrefixT&& value) { SetMatchAnyPrefix(std::forward<MatchAnyPrefixT>(value)); return *this;}
    template<typename MatchAnyPrefixT = Aws::String>
    StorageLensGroupFilter& AddMatchAnyPrefix(MatchAnyPrefixT&& value) { m_matchAnyPrefixHasBeenSet = true; m_matchAnyPrefix.emplace_back(std::forward<MatchAnyPrefixT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> Contains a list of suffixes. At least one suffix must be specified. Up to 10
     * suffixes are allowed. </p>
     */
    inline const Aws::Vector<Aws::String>& GetMatchAnySuffix() const { return m_matchAnySuffix; }
    inline bool MatchAnySuffixHasBeenSet() const { return m_matchAnySuffixHasBeenSet; }
    template<typename MatchAnySuffixT = Aws::Vector<Aws::String>>
    void SetMatchAnySuffix(MatchAnySuffixT&& value) { m_matchAnySuffixHasBeenSet = true; m_matchAnySuffix = std::forward<MatchAnySuffixT>(value); }
    template<typename MatchAnySuffixT = Aws::Vector<Aws::String>>
    StorageLensGroupFilter& WithMatchAnySuffix(MatchAnySuffixT&& value) { SetMatchAnySuffix(std::forward<MatchAnySuffixT>(value)); return *this;}
    template<typename MatchAnySuffixT = Aws::String>
    StorageLensGroupFilter& AddMatchAnySuffix(MatchAnySuffixT&& value) { m_matchAnySuffixHasBeenSet = true; m_matchAnySuffix.emplace_back(std::forward<MatchAnySuffixT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> Contains the list of S3 object tags. At least one object tag must be
     * specified. Up to 10 object tags are allowed. </p>
     */
    inline const Aws::Vector<S3Tag>& GetMatchAnyTag() const { return m_matchAnyTag; }
    inline bool MatchAnyTagHasBeenSet() const { return m_matchAnyTagHasBeenSet; }
    template<typename MatchAnyTagT = Aws::Vector<S3Tag>>
    void SetMatchAnyTag(MatchAnyTagT&& value) { m_matchAnyTagHasBeenSet = true; m_matchAnyTag = std::forward<MatchAnyTagT>(value); }
    template<typename MatchAnyTagT = Aws::Vector<S3Tag>>
    StorageLensGroupFilter& WithMatchAnyTag(MatchAnyTagT&& value) { SetMatchAnyTag(std::forward<MatchAnyTagT>(value)); return *this;}
    template<typename MatchAnyTagT = S3Tag>
    StorageLensGroupFilter& AddMatchAnyTag(MatchAnyTagT&& value) { m_matchAnyTagHasBeenSet = true; m_matchAnyTag.emplace_back(std::forward<MatchAnyTagT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> Contains <code>DaysGreaterThan</code> and <code>DaysLessThan</code> to
     * define the object age range (minimum and maximum number of days). </p>
     */
    inline const MatchObjectAge& GetMatchObjectAge() const { return m_matchObjectAge; }
    inline bool MatchObjectAgeHasBeenSet() const { return m_matchObjectAgeHasBeenSet; }
    template<typename MatchObjectAgeT = MatchObjectAge>
    void SetMatchObjectAge(MatchObjectAgeT&& value) { m_matchObjectAgeHasBeenSet = true; m_matchObjectAge = std::forward<MatchObjectAgeT>(value); }
    template<typename MatchObjectAgeT = MatchObjectAge>
    StorageLensGroupFilter& WithMatchObjectAge(MatchObjectAgeT&& value) { SetMatchObjectAge(std::forward<MatchObjectAgeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> Contains <code>BytesGreaterThan</code> and <code>BytesLessThan</code> to
     * define the object size range (minimum and maximum number of Bytes). </p>
     */
    inline const MatchObjectSize& GetMatchObjectSize() const { return m_matchObjectSize; }
    inline bool MatchObjectSizeHasBeenSet() const { return m_matchObjectSizeHasBeenSet; }
    template<typename MatchObjectSizeT = MatchObjectSize>
    void SetMatchObjectSize(MatchObjectSizeT&& value) { m_matchObjectSizeHasBeenSet = true; m_matchObjectSize = std::forward<MatchObjectSizeT>(value); }
    template<typename MatchObjectSizeT = MatchObjectSize>
    StorageLensGroupFilter& WithMatchObjectSize(MatchObjectSizeT&& value) { SetMatchObjectSize(std::forward<MatchObjectSizeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A logical operator that allows multiple filter conditions to be joined for
     * more complex comparisons of Storage Lens group data. Objects must match all of
     * the listed filter conditions that are joined by the <code>And</code> logical
     * operator. Only one of each filter condition is allowed.</p>
     */
    inline const StorageLensGroupAndOperator& GetAnd() const { return m_and; }
    inline bool AndHasBeenSet() const { return m_andHasBeenSet; }
    template<typename AndT = StorageLensGroupAndOperator>
    void SetAnd(AndT&& value) { m_andHasBeenSet = true; m_and = std::forward<AndT>(value); }
    template<typename AndT = StorageLensGroupAndOperator>
    StorageLensGroupFilter& WithAnd(AndT&& value) { SetAnd(std::forward<AndT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A single logical operator that allows multiple filter conditions to be
     * joined. Objects can match any of the listed filter conditions, which are joined
     * by the <code>Or</code> logical operator. Only one of each filter condition is
     * allowed. </p>
     */
    inline const StorageLensGroupOrOperator& GetOr() const { return m_or; }
    inline bool OrHasBeenSet() const { return m_orHasBeenSet; }
    template<typename OrT = StorageLensGroupOrOperator>
    void SetOr(OrT&& value) { m_orHasBeenSet = true; m_or = std::forward<OrT>(value); }
    template<typename OrT = StorageLensGroupOrOperator>
    StorageLensGroupFilter& WithOr(OrT&& value) { SetOr(std::forward<OrT>(value)); return *this;}
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

    StorageLensGroupAndOperator m_and;
    bool m_andHasBeenSet = false;

    StorageLensGroupOrOperator m_or;
    bool m_orHasBeenSet = false;
  };

} // namespace Model
} // namespace S3Control
} // namespace Aws

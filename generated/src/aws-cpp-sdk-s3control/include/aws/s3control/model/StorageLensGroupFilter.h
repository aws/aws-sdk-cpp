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
    AWS_S3CONTROL_API StorageLensGroupFilter();
    AWS_S3CONTROL_API StorageLensGroupFilter(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_S3CONTROL_API StorageLensGroupFilter& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_S3CONTROL_API void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;


    /**
     * <p> Contains a list of prefixes. At least one prefix must be specified. Up to 10
     * prefixes are allowed. </p>
     */
    inline const Aws::Vector<Aws::String>& GetMatchAnyPrefix() const{ return m_matchAnyPrefix; }

    /**
     * <p> Contains a list of prefixes. At least one prefix must be specified. Up to 10
     * prefixes are allowed. </p>
     */
    inline bool MatchAnyPrefixHasBeenSet() const { return m_matchAnyPrefixHasBeenSet; }

    /**
     * <p> Contains a list of prefixes. At least one prefix must be specified. Up to 10
     * prefixes are allowed. </p>
     */
    inline void SetMatchAnyPrefix(const Aws::Vector<Aws::String>& value) { m_matchAnyPrefixHasBeenSet = true; m_matchAnyPrefix = value; }

    /**
     * <p> Contains a list of prefixes. At least one prefix must be specified. Up to 10
     * prefixes are allowed. </p>
     */
    inline void SetMatchAnyPrefix(Aws::Vector<Aws::String>&& value) { m_matchAnyPrefixHasBeenSet = true; m_matchAnyPrefix = std::move(value); }

    /**
     * <p> Contains a list of prefixes. At least one prefix must be specified. Up to 10
     * prefixes are allowed. </p>
     */
    inline StorageLensGroupFilter& WithMatchAnyPrefix(const Aws::Vector<Aws::String>& value) { SetMatchAnyPrefix(value); return *this;}

    /**
     * <p> Contains a list of prefixes. At least one prefix must be specified. Up to 10
     * prefixes are allowed. </p>
     */
    inline StorageLensGroupFilter& WithMatchAnyPrefix(Aws::Vector<Aws::String>&& value) { SetMatchAnyPrefix(std::move(value)); return *this;}

    /**
     * <p> Contains a list of prefixes. At least one prefix must be specified. Up to 10
     * prefixes are allowed. </p>
     */
    inline StorageLensGroupFilter& AddMatchAnyPrefix(const Aws::String& value) { m_matchAnyPrefixHasBeenSet = true; m_matchAnyPrefix.push_back(value); return *this; }

    /**
     * <p> Contains a list of prefixes. At least one prefix must be specified. Up to 10
     * prefixes are allowed. </p>
     */
    inline StorageLensGroupFilter& AddMatchAnyPrefix(Aws::String&& value) { m_matchAnyPrefixHasBeenSet = true; m_matchAnyPrefix.push_back(std::move(value)); return *this; }

    /**
     * <p> Contains a list of prefixes. At least one prefix must be specified. Up to 10
     * prefixes are allowed. </p>
     */
    inline StorageLensGroupFilter& AddMatchAnyPrefix(const char* value) { m_matchAnyPrefixHasBeenSet = true; m_matchAnyPrefix.push_back(value); return *this; }


    /**
     * <p> Contains a list of suffixes. At least one suffix must be specified. Up to 10
     * suffixes are allowed. </p>
     */
    inline const Aws::Vector<Aws::String>& GetMatchAnySuffix() const{ return m_matchAnySuffix; }

    /**
     * <p> Contains a list of suffixes. At least one suffix must be specified. Up to 10
     * suffixes are allowed. </p>
     */
    inline bool MatchAnySuffixHasBeenSet() const { return m_matchAnySuffixHasBeenSet; }

    /**
     * <p> Contains a list of suffixes. At least one suffix must be specified. Up to 10
     * suffixes are allowed. </p>
     */
    inline void SetMatchAnySuffix(const Aws::Vector<Aws::String>& value) { m_matchAnySuffixHasBeenSet = true; m_matchAnySuffix = value; }

    /**
     * <p> Contains a list of suffixes. At least one suffix must be specified. Up to 10
     * suffixes are allowed. </p>
     */
    inline void SetMatchAnySuffix(Aws::Vector<Aws::String>&& value) { m_matchAnySuffixHasBeenSet = true; m_matchAnySuffix = std::move(value); }

    /**
     * <p> Contains a list of suffixes. At least one suffix must be specified. Up to 10
     * suffixes are allowed. </p>
     */
    inline StorageLensGroupFilter& WithMatchAnySuffix(const Aws::Vector<Aws::String>& value) { SetMatchAnySuffix(value); return *this;}

    /**
     * <p> Contains a list of suffixes. At least one suffix must be specified. Up to 10
     * suffixes are allowed. </p>
     */
    inline StorageLensGroupFilter& WithMatchAnySuffix(Aws::Vector<Aws::String>&& value) { SetMatchAnySuffix(std::move(value)); return *this;}

    /**
     * <p> Contains a list of suffixes. At least one suffix must be specified. Up to 10
     * suffixes are allowed. </p>
     */
    inline StorageLensGroupFilter& AddMatchAnySuffix(const Aws::String& value) { m_matchAnySuffixHasBeenSet = true; m_matchAnySuffix.push_back(value); return *this; }

    /**
     * <p> Contains a list of suffixes. At least one suffix must be specified. Up to 10
     * suffixes are allowed. </p>
     */
    inline StorageLensGroupFilter& AddMatchAnySuffix(Aws::String&& value) { m_matchAnySuffixHasBeenSet = true; m_matchAnySuffix.push_back(std::move(value)); return *this; }

    /**
     * <p> Contains a list of suffixes. At least one suffix must be specified. Up to 10
     * suffixes are allowed. </p>
     */
    inline StorageLensGroupFilter& AddMatchAnySuffix(const char* value) { m_matchAnySuffixHasBeenSet = true; m_matchAnySuffix.push_back(value); return *this; }


    /**
     * <p> Contains the list of S3 object tags. At least one object tag must be
     * specified. Up to 10 object tags are allowed. </p>
     */
    inline const Aws::Vector<S3Tag>& GetMatchAnyTag() const{ return m_matchAnyTag; }

    /**
     * <p> Contains the list of S3 object tags. At least one object tag must be
     * specified. Up to 10 object tags are allowed. </p>
     */
    inline bool MatchAnyTagHasBeenSet() const { return m_matchAnyTagHasBeenSet; }

    /**
     * <p> Contains the list of S3 object tags. At least one object tag must be
     * specified. Up to 10 object tags are allowed. </p>
     */
    inline void SetMatchAnyTag(const Aws::Vector<S3Tag>& value) { m_matchAnyTagHasBeenSet = true; m_matchAnyTag = value; }

    /**
     * <p> Contains the list of S3 object tags. At least one object tag must be
     * specified. Up to 10 object tags are allowed. </p>
     */
    inline void SetMatchAnyTag(Aws::Vector<S3Tag>&& value) { m_matchAnyTagHasBeenSet = true; m_matchAnyTag = std::move(value); }

    /**
     * <p> Contains the list of S3 object tags. At least one object tag must be
     * specified. Up to 10 object tags are allowed. </p>
     */
    inline StorageLensGroupFilter& WithMatchAnyTag(const Aws::Vector<S3Tag>& value) { SetMatchAnyTag(value); return *this;}

    /**
     * <p> Contains the list of S3 object tags. At least one object tag must be
     * specified. Up to 10 object tags are allowed. </p>
     */
    inline StorageLensGroupFilter& WithMatchAnyTag(Aws::Vector<S3Tag>&& value) { SetMatchAnyTag(std::move(value)); return *this;}

    /**
     * <p> Contains the list of S3 object tags. At least one object tag must be
     * specified. Up to 10 object tags are allowed. </p>
     */
    inline StorageLensGroupFilter& AddMatchAnyTag(const S3Tag& value) { m_matchAnyTagHasBeenSet = true; m_matchAnyTag.push_back(value); return *this; }

    /**
     * <p> Contains the list of S3 object tags. At least one object tag must be
     * specified. Up to 10 object tags are allowed. </p>
     */
    inline StorageLensGroupFilter& AddMatchAnyTag(S3Tag&& value) { m_matchAnyTagHasBeenSet = true; m_matchAnyTag.push_back(std::move(value)); return *this; }


    /**
     * <p> Contains <code>DaysGreaterThan</code> and <code>DaysLessThan</code> to
     * define the object age range (minimum and maximum number of days). </p>
     */
    inline const MatchObjectAge& GetMatchObjectAge() const{ return m_matchObjectAge; }

    /**
     * <p> Contains <code>DaysGreaterThan</code> and <code>DaysLessThan</code> to
     * define the object age range (minimum and maximum number of days). </p>
     */
    inline bool MatchObjectAgeHasBeenSet() const { return m_matchObjectAgeHasBeenSet; }

    /**
     * <p> Contains <code>DaysGreaterThan</code> and <code>DaysLessThan</code> to
     * define the object age range (minimum and maximum number of days). </p>
     */
    inline void SetMatchObjectAge(const MatchObjectAge& value) { m_matchObjectAgeHasBeenSet = true; m_matchObjectAge = value; }

    /**
     * <p> Contains <code>DaysGreaterThan</code> and <code>DaysLessThan</code> to
     * define the object age range (minimum and maximum number of days). </p>
     */
    inline void SetMatchObjectAge(MatchObjectAge&& value) { m_matchObjectAgeHasBeenSet = true; m_matchObjectAge = std::move(value); }

    /**
     * <p> Contains <code>DaysGreaterThan</code> and <code>DaysLessThan</code> to
     * define the object age range (minimum and maximum number of days). </p>
     */
    inline StorageLensGroupFilter& WithMatchObjectAge(const MatchObjectAge& value) { SetMatchObjectAge(value); return *this;}

    /**
     * <p> Contains <code>DaysGreaterThan</code> and <code>DaysLessThan</code> to
     * define the object age range (minimum and maximum number of days). </p>
     */
    inline StorageLensGroupFilter& WithMatchObjectAge(MatchObjectAge&& value) { SetMatchObjectAge(std::move(value)); return *this;}


    /**
     * <p> Contains <code>BytesGreaterThan</code> and <code>BytesLessThan</code> to
     * define the object size range (minimum and maximum number of Bytes). </p>
     */
    inline const MatchObjectSize& GetMatchObjectSize() const{ return m_matchObjectSize; }

    /**
     * <p> Contains <code>BytesGreaterThan</code> and <code>BytesLessThan</code> to
     * define the object size range (minimum and maximum number of Bytes). </p>
     */
    inline bool MatchObjectSizeHasBeenSet() const { return m_matchObjectSizeHasBeenSet; }

    /**
     * <p> Contains <code>BytesGreaterThan</code> and <code>BytesLessThan</code> to
     * define the object size range (minimum and maximum number of Bytes). </p>
     */
    inline void SetMatchObjectSize(const MatchObjectSize& value) { m_matchObjectSizeHasBeenSet = true; m_matchObjectSize = value; }

    /**
     * <p> Contains <code>BytesGreaterThan</code> and <code>BytesLessThan</code> to
     * define the object size range (minimum and maximum number of Bytes). </p>
     */
    inline void SetMatchObjectSize(MatchObjectSize&& value) { m_matchObjectSizeHasBeenSet = true; m_matchObjectSize = std::move(value); }

    /**
     * <p> Contains <code>BytesGreaterThan</code> and <code>BytesLessThan</code> to
     * define the object size range (minimum and maximum number of Bytes). </p>
     */
    inline StorageLensGroupFilter& WithMatchObjectSize(const MatchObjectSize& value) { SetMatchObjectSize(value); return *this;}

    /**
     * <p> Contains <code>BytesGreaterThan</code> and <code>BytesLessThan</code> to
     * define the object size range (minimum and maximum number of Bytes). </p>
     */
    inline StorageLensGroupFilter& WithMatchObjectSize(MatchObjectSize&& value) { SetMatchObjectSize(std::move(value)); return *this;}


    /**
     * <p>A logical operator that allows multiple filter conditions to be joined for
     * more complex comparisons of Storage Lens group data. Objects must match all of
     * the listed filter conditions that are joined by the <code>And</code> logical
     * operator. Only one of each filter condition is allowed.</p>
     */
    inline const StorageLensGroupAndOperator& GetAnd() const{ return m_and; }

    /**
     * <p>A logical operator that allows multiple filter conditions to be joined for
     * more complex comparisons of Storage Lens group data. Objects must match all of
     * the listed filter conditions that are joined by the <code>And</code> logical
     * operator. Only one of each filter condition is allowed.</p>
     */
    inline bool AndHasBeenSet() const { return m_andHasBeenSet; }

    /**
     * <p>A logical operator that allows multiple filter conditions to be joined for
     * more complex comparisons of Storage Lens group data. Objects must match all of
     * the listed filter conditions that are joined by the <code>And</code> logical
     * operator. Only one of each filter condition is allowed.</p>
     */
    inline void SetAnd(const StorageLensGroupAndOperator& value) { m_andHasBeenSet = true; m_and = value; }

    /**
     * <p>A logical operator that allows multiple filter conditions to be joined for
     * more complex comparisons of Storage Lens group data. Objects must match all of
     * the listed filter conditions that are joined by the <code>And</code> logical
     * operator. Only one of each filter condition is allowed.</p>
     */
    inline void SetAnd(StorageLensGroupAndOperator&& value) { m_andHasBeenSet = true; m_and = std::move(value); }

    /**
     * <p>A logical operator that allows multiple filter conditions to be joined for
     * more complex comparisons of Storage Lens group data. Objects must match all of
     * the listed filter conditions that are joined by the <code>And</code> logical
     * operator. Only one of each filter condition is allowed.</p>
     */
    inline StorageLensGroupFilter& WithAnd(const StorageLensGroupAndOperator& value) { SetAnd(value); return *this;}

    /**
     * <p>A logical operator that allows multiple filter conditions to be joined for
     * more complex comparisons of Storage Lens group data. Objects must match all of
     * the listed filter conditions that are joined by the <code>And</code> logical
     * operator. Only one of each filter condition is allowed.</p>
     */
    inline StorageLensGroupFilter& WithAnd(StorageLensGroupAndOperator&& value) { SetAnd(std::move(value)); return *this;}


    /**
     * <p>A single logical operator that allows multiple filter conditions to be
     * joined. Objects can match any of the listed filter conditions, which are joined
     * by the <code>Or</code> logical operator. Only one of each filter condition is
     * allowed. </p>
     */
    inline const StorageLensGroupOrOperator& GetOr() const{ return m_or; }

    /**
     * <p>A single logical operator that allows multiple filter conditions to be
     * joined. Objects can match any of the listed filter conditions, which are joined
     * by the <code>Or</code> logical operator. Only one of each filter condition is
     * allowed. </p>
     */
    inline bool OrHasBeenSet() const { return m_orHasBeenSet; }

    /**
     * <p>A single logical operator that allows multiple filter conditions to be
     * joined. Objects can match any of the listed filter conditions, which are joined
     * by the <code>Or</code> logical operator. Only one of each filter condition is
     * allowed. </p>
     */
    inline void SetOr(const StorageLensGroupOrOperator& value) { m_orHasBeenSet = true; m_or = value; }

    /**
     * <p>A single logical operator that allows multiple filter conditions to be
     * joined. Objects can match any of the listed filter conditions, which are joined
     * by the <code>Or</code> logical operator. Only one of each filter condition is
     * allowed. </p>
     */
    inline void SetOr(StorageLensGroupOrOperator&& value) { m_orHasBeenSet = true; m_or = std::move(value); }

    /**
     * <p>A single logical operator that allows multiple filter conditions to be
     * joined. Objects can match any of the listed filter conditions, which are joined
     * by the <code>Or</code> logical operator. Only one of each filter condition is
     * allowed. </p>
     */
    inline StorageLensGroupFilter& WithOr(const StorageLensGroupOrOperator& value) { SetOr(value); return *this;}

    /**
     * <p>A single logical operator that allows multiple filter conditions to be
     * joined. Objects can match any of the listed filter conditions, which are joined
     * by the <code>Or</code> logical operator. Only one of each filter condition is
     * allowed. </p>
     */
    inline StorageLensGroupFilter& WithOr(StorageLensGroupOrOperator&& value) { SetOr(std::move(value)); return *this;}

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

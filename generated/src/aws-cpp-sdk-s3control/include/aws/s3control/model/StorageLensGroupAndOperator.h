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
   * <p> A logical operator that allows multiple filter conditions to be joined for
   * more complex comparisons of Storage Lens group data. </p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/s3control-2018-08-20/StorageLensGroupAndOperator">AWS
   * API Reference</a></p>
   */
  class StorageLensGroupAndOperator
  {
  public:
    AWS_S3CONTROL_API StorageLensGroupAndOperator();
    AWS_S3CONTROL_API StorageLensGroupAndOperator(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_S3CONTROL_API StorageLensGroupAndOperator& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

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
    inline StorageLensGroupAndOperator& WithMatchAnyPrefix(const Aws::Vector<Aws::String>& value) { SetMatchAnyPrefix(value); return *this;}

    /**
     * <p> Contains a list of prefixes. At least one prefix must be specified. Up to 10
     * prefixes are allowed. </p>
     */
    inline StorageLensGroupAndOperator& WithMatchAnyPrefix(Aws::Vector<Aws::String>&& value) { SetMatchAnyPrefix(std::move(value)); return *this;}

    /**
     * <p> Contains a list of prefixes. At least one prefix must be specified. Up to 10
     * prefixes are allowed. </p>
     */
    inline StorageLensGroupAndOperator& AddMatchAnyPrefix(const Aws::String& value) { m_matchAnyPrefixHasBeenSet = true; m_matchAnyPrefix.push_back(value); return *this; }

    /**
     * <p> Contains a list of prefixes. At least one prefix must be specified. Up to 10
     * prefixes are allowed. </p>
     */
    inline StorageLensGroupAndOperator& AddMatchAnyPrefix(Aws::String&& value) { m_matchAnyPrefixHasBeenSet = true; m_matchAnyPrefix.push_back(std::move(value)); return *this; }

    /**
     * <p> Contains a list of prefixes. At least one prefix must be specified. Up to 10
     * prefixes are allowed. </p>
     */
    inline StorageLensGroupAndOperator& AddMatchAnyPrefix(const char* value) { m_matchAnyPrefixHasBeenSet = true; m_matchAnyPrefix.push_back(value); return *this; }


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
    inline StorageLensGroupAndOperator& WithMatchAnySuffix(const Aws::Vector<Aws::String>& value) { SetMatchAnySuffix(value); return *this;}

    /**
     * <p> Contains a list of suffixes. At least one suffix must be specified. Up to 10
     * suffixes are allowed. </p>
     */
    inline StorageLensGroupAndOperator& WithMatchAnySuffix(Aws::Vector<Aws::String>&& value) { SetMatchAnySuffix(std::move(value)); return *this;}

    /**
     * <p> Contains a list of suffixes. At least one suffix must be specified. Up to 10
     * suffixes are allowed. </p>
     */
    inline StorageLensGroupAndOperator& AddMatchAnySuffix(const Aws::String& value) { m_matchAnySuffixHasBeenSet = true; m_matchAnySuffix.push_back(value); return *this; }

    /**
     * <p> Contains a list of suffixes. At least one suffix must be specified. Up to 10
     * suffixes are allowed. </p>
     */
    inline StorageLensGroupAndOperator& AddMatchAnySuffix(Aws::String&& value) { m_matchAnySuffixHasBeenSet = true; m_matchAnySuffix.push_back(std::move(value)); return *this; }

    /**
     * <p> Contains a list of suffixes. At least one suffix must be specified. Up to 10
     * suffixes are allowed. </p>
     */
    inline StorageLensGroupAndOperator& AddMatchAnySuffix(const char* value) { m_matchAnySuffixHasBeenSet = true; m_matchAnySuffix.push_back(value); return *this; }


    /**
     * <p> Contains the list of object tags. At least one object tag must be specified.
     * Up to 10 object tags are allowed. </p>
     */
    inline const Aws::Vector<S3Tag>& GetMatchAnyTag() const{ return m_matchAnyTag; }

    /**
     * <p> Contains the list of object tags. At least one object tag must be specified.
     * Up to 10 object tags are allowed. </p>
     */
    inline bool MatchAnyTagHasBeenSet() const { return m_matchAnyTagHasBeenSet; }

    /**
     * <p> Contains the list of object tags. At least one object tag must be specified.
     * Up to 10 object tags are allowed. </p>
     */
    inline void SetMatchAnyTag(const Aws::Vector<S3Tag>& value) { m_matchAnyTagHasBeenSet = true; m_matchAnyTag = value; }

    /**
     * <p> Contains the list of object tags. At least one object tag must be specified.
     * Up to 10 object tags are allowed. </p>
     */
    inline void SetMatchAnyTag(Aws::Vector<S3Tag>&& value) { m_matchAnyTagHasBeenSet = true; m_matchAnyTag = std::move(value); }

    /**
     * <p> Contains the list of object tags. At least one object tag must be specified.
     * Up to 10 object tags are allowed. </p>
     */
    inline StorageLensGroupAndOperator& WithMatchAnyTag(const Aws::Vector<S3Tag>& value) { SetMatchAnyTag(value); return *this;}

    /**
     * <p> Contains the list of object tags. At least one object tag must be specified.
     * Up to 10 object tags are allowed. </p>
     */
    inline StorageLensGroupAndOperator& WithMatchAnyTag(Aws::Vector<S3Tag>&& value) { SetMatchAnyTag(std::move(value)); return *this;}

    /**
     * <p> Contains the list of object tags. At least one object tag must be specified.
     * Up to 10 object tags are allowed. </p>
     */
    inline StorageLensGroupAndOperator& AddMatchAnyTag(const S3Tag& value) { m_matchAnyTagHasBeenSet = true; m_matchAnyTag.push_back(value); return *this; }

    /**
     * <p> Contains the list of object tags. At least one object tag must be specified.
     * Up to 10 object tags are allowed. </p>
     */
    inline StorageLensGroupAndOperator& AddMatchAnyTag(S3Tag&& value) { m_matchAnyTagHasBeenSet = true; m_matchAnyTag.push_back(std::move(value)); return *this; }


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
    inline StorageLensGroupAndOperator& WithMatchObjectAge(const MatchObjectAge& value) { SetMatchObjectAge(value); return *this;}

    /**
     * <p> Contains <code>DaysGreaterThan</code> and <code>DaysLessThan</code> to
     * define the object age range (minimum and maximum number of days). </p>
     */
    inline StorageLensGroupAndOperator& WithMatchObjectAge(MatchObjectAge&& value) { SetMatchObjectAge(std::move(value)); return *this;}


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
    inline StorageLensGroupAndOperator& WithMatchObjectSize(const MatchObjectSize& value) { SetMatchObjectSize(value); return *this;}

    /**
     * <p> Contains <code>BytesGreaterThan</code> and <code>BytesLessThan</code> to
     * define the object size range (minimum and maximum number of Bytes). </p>
     */
    inline StorageLensGroupAndOperator& WithMatchObjectSize(MatchObjectSize&& value) { SetMatchObjectSize(std::move(value)); return *this;}

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

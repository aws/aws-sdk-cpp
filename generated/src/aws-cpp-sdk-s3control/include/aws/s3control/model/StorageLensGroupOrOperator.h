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
    AWS_S3CONTROL_API StorageLensGroupOrOperator();
    AWS_S3CONTROL_API StorageLensGroupOrOperator(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_S3CONTROL_API StorageLensGroupOrOperator& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_S3CONTROL_API void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;


    /**
     * <p> Filters objects that match any of the specified prefixes. </p>
     */
    inline const Aws::Vector<Aws::String>& GetMatchAnyPrefix() const{ return m_matchAnyPrefix; }

    /**
     * <p> Filters objects that match any of the specified prefixes. </p>
     */
    inline bool MatchAnyPrefixHasBeenSet() const { return m_matchAnyPrefixHasBeenSet; }

    /**
     * <p> Filters objects that match any of the specified prefixes. </p>
     */
    inline void SetMatchAnyPrefix(const Aws::Vector<Aws::String>& value) { m_matchAnyPrefixHasBeenSet = true; m_matchAnyPrefix = value; }

    /**
     * <p> Filters objects that match any of the specified prefixes. </p>
     */
    inline void SetMatchAnyPrefix(Aws::Vector<Aws::String>&& value) { m_matchAnyPrefixHasBeenSet = true; m_matchAnyPrefix = std::move(value); }

    /**
     * <p> Filters objects that match any of the specified prefixes. </p>
     */
    inline StorageLensGroupOrOperator& WithMatchAnyPrefix(const Aws::Vector<Aws::String>& value) { SetMatchAnyPrefix(value); return *this;}

    /**
     * <p> Filters objects that match any of the specified prefixes. </p>
     */
    inline StorageLensGroupOrOperator& WithMatchAnyPrefix(Aws::Vector<Aws::String>&& value) { SetMatchAnyPrefix(std::move(value)); return *this;}

    /**
     * <p> Filters objects that match any of the specified prefixes. </p>
     */
    inline StorageLensGroupOrOperator& AddMatchAnyPrefix(const Aws::String& value) { m_matchAnyPrefixHasBeenSet = true; m_matchAnyPrefix.push_back(value); return *this; }

    /**
     * <p> Filters objects that match any of the specified prefixes. </p>
     */
    inline StorageLensGroupOrOperator& AddMatchAnyPrefix(Aws::String&& value) { m_matchAnyPrefixHasBeenSet = true; m_matchAnyPrefix.push_back(std::move(value)); return *this; }

    /**
     * <p> Filters objects that match any of the specified prefixes. </p>
     */
    inline StorageLensGroupOrOperator& AddMatchAnyPrefix(const char* value) { m_matchAnyPrefixHasBeenSet = true; m_matchAnyPrefix.push_back(value); return *this; }


    /**
     * <p> Filters objects that match any of the specified suffixes. </p>
     */
    inline const Aws::Vector<Aws::String>& GetMatchAnySuffix() const{ return m_matchAnySuffix; }

    /**
     * <p> Filters objects that match any of the specified suffixes. </p>
     */
    inline bool MatchAnySuffixHasBeenSet() const { return m_matchAnySuffixHasBeenSet; }

    /**
     * <p> Filters objects that match any of the specified suffixes. </p>
     */
    inline void SetMatchAnySuffix(const Aws::Vector<Aws::String>& value) { m_matchAnySuffixHasBeenSet = true; m_matchAnySuffix = value; }

    /**
     * <p> Filters objects that match any of the specified suffixes. </p>
     */
    inline void SetMatchAnySuffix(Aws::Vector<Aws::String>&& value) { m_matchAnySuffixHasBeenSet = true; m_matchAnySuffix = std::move(value); }

    /**
     * <p> Filters objects that match any of the specified suffixes. </p>
     */
    inline StorageLensGroupOrOperator& WithMatchAnySuffix(const Aws::Vector<Aws::String>& value) { SetMatchAnySuffix(value); return *this;}

    /**
     * <p> Filters objects that match any of the specified suffixes. </p>
     */
    inline StorageLensGroupOrOperator& WithMatchAnySuffix(Aws::Vector<Aws::String>&& value) { SetMatchAnySuffix(std::move(value)); return *this;}

    /**
     * <p> Filters objects that match any of the specified suffixes. </p>
     */
    inline StorageLensGroupOrOperator& AddMatchAnySuffix(const Aws::String& value) { m_matchAnySuffixHasBeenSet = true; m_matchAnySuffix.push_back(value); return *this; }

    /**
     * <p> Filters objects that match any of the specified suffixes. </p>
     */
    inline StorageLensGroupOrOperator& AddMatchAnySuffix(Aws::String&& value) { m_matchAnySuffixHasBeenSet = true; m_matchAnySuffix.push_back(std::move(value)); return *this; }

    /**
     * <p> Filters objects that match any of the specified suffixes. </p>
     */
    inline StorageLensGroupOrOperator& AddMatchAnySuffix(const char* value) { m_matchAnySuffixHasBeenSet = true; m_matchAnySuffix.push_back(value); return *this; }


    /**
     * <p> Filters objects that match any of the specified S3 object tags. </p>
     */
    inline const Aws::Vector<S3Tag>& GetMatchAnyTag() const{ return m_matchAnyTag; }

    /**
     * <p> Filters objects that match any of the specified S3 object tags. </p>
     */
    inline bool MatchAnyTagHasBeenSet() const { return m_matchAnyTagHasBeenSet; }

    /**
     * <p> Filters objects that match any of the specified S3 object tags. </p>
     */
    inline void SetMatchAnyTag(const Aws::Vector<S3Tag>& value) { m_matchAnyTagHasBeenSet = true; m_matchAnyTag = value; }

    /**
     * <p> Filters objects that match any of the specified S3 object tags. </p>
     */
    inline void SetMatchAnyTag(Aws::Vector<S3Tag>&& value) { m_matchAnyTagHasBeenSet = true; m_matchAnyTag = std::move(value); }

    /**
     * <p> Filters objects that match any of the specified S3 object tags. </p>
     */
    inline StorageLensGroupOrOperator& WithMatchAnyTag(const Aws::Vector<S3Tag>& value) { SetMatchAnyTag(value); return *this;}

    /**
     * <p> Filters objects that match any of the specified S3 object tags. </p>
     */
    inline StorageLensGroupOrOperator& WithMatchAnyTag(Aws::Vector<S3Tag>&& value) { SetMatchAnyTag(std::move(value)); return *this;}

    /**
     * <p> Filters objects that match any of the specified S3 object tags. </p>
     */
    inline StorageLensGroupOrOperator& AddMatchAnyTag(const S3Tag& value) { m_matchAnyTagHasBeenSet = true; m_matchAnyTag.push_back(value); return *this; }

    /**
     * <p> Filters objects that match any of the specified S3 object tags. </p>
     */
    inline StorageLensGroupOrOperator& AddMatchAnyTag(S3Tag&& value) { m_matchAnyTagHasBeenSet = true; m_matchAnyTag.push_back(std::move(value)); return *this; }


    /**
     * <p> Filters objects that match the specified object age range. </p>
     */
    inline const MatchObjectAge& GetMatchObjectAge() const{ return m_matchObjectAge; }

    /**
     * <p> Filters objects that match the specified object age range. </p>
     */
    inline bool MatchObjectAgeHasBeenSet() const { return m_matchObjectAgeHasBeenSet; }

    /**
     * <p> Filters objects that match the specified object age range. </p>
     */
    inline void SetMatchObjectAge(const MatchObjectAge& value) { m_matchObjectAgeHasBeenSet = true; m_matchObjectAge = value; }

    /**
     * <p> Filters objects that match the specified object age range. </p>
     */
    inline void SetMatchObjectAge(MatchObjectAge&& value) { m_matchObjectAgeHasBeenSet = true; m_matchObjectAge = std::move(value); }

    /**
     * <p> Filters objects that match the specified object age range. </p>
     */
    inline StorageLensGroupOrOperator& WithMatchObjectAge(const MatchObjectAge& value) { SetMatchObjectAge(value); return *this;}

    /**
     * <p> Filters objects that match the specified object age range. </p>
     */
    inline StorageLensGroupOrOperator& WithMatchObjectAge(MatchObjectAge&& value) { SetMatchObjectAge(std::move(value)); return *this;}


    /**
     * <p> Filters objects that match the specified object size range. </p>
     */
    inline const MatchObjectSize& GetMatchObjectSize() const{ return m_matchObjectSize; }

    /**
     * <p> Filters objects that match the specified object size range. </p>
     */
    inline bool MatchObjectSizeHasBeenSet() const { return m_matchObjectSizeHasBeenSet; }

    /**
     * <p> Filters objects that match the specified object size range. </p>
     */
    inline void SetMatchObjectSize(const MatchObjectSize& value) { m_matchObjectSizeHasBeenSet = true; m_matchObjectSize = value; }

    /**
     * <p> Filters objects that match the specified object size range. </p>
     */
    inline void SetMatchObjectSize(MatchObjectSize&& value) { m_matchObjectSizeHasBeenSet = true; m_matchObjectSize = std::move(value); }

    /**
     * <p> Filters objects that match the specified object size range. </p>
     */
    inline StorageLensGroupOrOperator& WithMatchObjectSize(const MatchObjectSize& value) { SetMatchObjectSize(value); return *this;}

    /**
     * <p> Filters objects that match the specified object size range. </p>
     */
    inline StorageLensGroupOrOperator& WithMatchObjectSize(MatchObjectSize&& value) { SetMatchObjectSize(std::move(value)); return *this;}

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

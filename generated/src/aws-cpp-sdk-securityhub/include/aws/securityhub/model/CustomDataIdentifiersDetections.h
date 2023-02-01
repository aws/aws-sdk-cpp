/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/securityhub/model/Occurrences.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace SecurityHub
{
namespace Model
{

  /**
   * <p>The list of detected instances of sensitive data.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/CustomDataIdentifiersDetections">AWS
   * API Reference</a></p>
   */
  class CustomDataIdentifiersDetections
  {
  public:
    AWS_SECURITYHUB_API CustomDataIdentifiersDetections();
    AWS_SECURITYHUB_API CustomDataIdentifiersDetections(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API CustomDataIdentifiersDetections& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The total number of occurrences of sensitive data that were detected.</p>
     */
    inline long long GetCount() const{ return m_count; }

    /**
     * <p>The total number of occurrences of sensitive data that were detected.</p>
     */
    inline bool CountHasBeenSet() const { return m_countHasBeenSet; }

    /**
     * <p>The total number of occurrences of sensitive data that were detected.</p>
     */
    inline void SetCount(long long value) { m_countHasBeenSet = true; m_count = value; }

    /**
     * <p>The total number of occurrences of sensitive data that were detected.</p>
     */
    inline CustomDataIdentifiersDetections& WithCount(long long value) { SetCount(value); return *this;}


    /**
     * <p>The ARN of the custom identifier that was used to detect the sensitive
     * data.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p>The ARN of the custom identifier that was used to detect the sensitive
     * data.</p>
     */
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }

    /**
     * <p>The ARN of the custom identifier that was used to detect the sensitive
     * data.</p>
     */
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }

    /**
     * <p>The ARN of the custom identifier that was used to detect the sensitive
     * data.</p>
     */
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }

    /**
     * <p>The ARN of the custom identifier that was used to detect the sensitive
     * data.</p>
     */
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }

    /**
     * <p>The ARN of the custom identifier that was used to detect the sensitive
     * data.</p>
     */
    inline CustomDataIdentifiersDetections& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p>The ARN of the custom identifier that was used to detect the sensitive
     * data.</p>
     */
    inline CustomDataIdentifiersDetections& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the custom identifier that was used to detect the sensitive
     * data.</p>
     */
    inline CustomDataIdentifiersDetections& WithArn(const char* value) { SetArn(value); return *this;}


    /**
     * <p>he name of the custom identifier that detected the sensitive data.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>he name of the custom identifier that detected the sensitive data.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>he name of the custom identifier that detected the sensitive data.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>he name of the custom identifier that detected the sensitive data.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>he name of the custom identifier that detected the sensitive data.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>he name of the custom identifier that detected the sensitive data.</p>
     */
    inline CustomDataIdentifiersDetections& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>he name of the custom identifier that detected the sensitive data.</p>
     */
    inline CustomDataIdentifiersDetections& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>he name of the custom identifier that detected the sensitive data.</p>
     */
    inline CustomDataIdentifiersDetections& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>Details about the sensitive data that was detected.</p>
     */
    inline const Occurrences& GetOccurrences() const{ return m_occurrences; }

    /**
     * <p>Details about the sensitive data that was detected.</p>
     */
    inline bool OccurrencesHasBeenSet() const { return m_occurrencesHasBeenSet; }

    /**
     * <p>Details about the sensitive data that was detected.</p>
     */
    inline void SetOccurrences(const Occurrences& value) { m_occurrencesHasBeenSet = true; m_occurrences = value; }

    /**
     * <p>Details about the sensitive data that was detected.</p>
     */
    inline void SetOccurrences(Occurrences&& value) { m_occurrencesHasBeenSet = true; m_occurrences = std::move(value); }

    /**
     * <p>Details about the sensitive data that was detected.</p>
     */
    inline CustomDataIdentifiersDetections& WithOccurrences(const Occurrences& value) { SetOccurrences(value); return *this;}

    /**
     * <p>Details about the sensitive data that was detected.</p>
     */
    inline CustomDataIdentifiersDetections& WithOccurrences(Occurrences&& value) { SetOccurrences(std::move(value)); return *this;}

  private:

    long long m_count;
    bool m_countHasBeenSet = false;

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Occurrences m_occurrences;
    bool m_occurrencesHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws

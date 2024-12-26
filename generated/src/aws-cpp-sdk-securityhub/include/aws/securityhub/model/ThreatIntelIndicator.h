/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/securityhub/model/ThreatIntelIndicatorType.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/securityhub/model/ThreatIntelIndicatorCategory.h>
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
   * <p>Details about the threat intelligence related to a finding.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/ThreatIntelIndicator">AWS
   * API Reference</a></p>
   */
  class ThreatIntelIndicator
  {
  public:
    AWS_SECURITYHUB_API ThreatIntelIndicator();
    AWS_SECURITYHUB_API ThreatIntelIndicator(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API ThreatIntelIndicator& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The type of threat intelligence indicator.</p>
     */
    inline const ThreatIntelIndicatorType& GetType() const{ return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(const ThreatIntelIndicatorType& value) { m_typeHasBeenSet = true; m_type = value; }
    inline void SetType(ThreatIntelIndicatorType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }
    inline ThreatIntelIndicator& WithType(const ThreatIntelIndicatorType& value) { SetType(value); return *this;}
    inline ThreatIntelIndicator& WithType(ThreatIntelIndicatorType&& value) { SetType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The value of a threat intelligence indicator.</p> <p>Length Constraints:
     * Minimum of 1 length. Maximum of 512 length.</p>
     */
    inline const Aws::String& GetValue() const{ return m_value; }
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }
    inline void SetValue(const Aws::String& value) { m_valueHasBeenSet = true; m_value = value; }
    inline void SetValue(Aws::String&& value) { m_valueHasBeenSet = true; m_value = std::move(value); }
    inline void SetValue(const char* value) { m_valueHasBeenSet = true; m_value.assign(value); }
    inline ThreatIntelIndicator& WithValue(const Aws::String& value) { SetValue(value); return *this;}
    inline ThreatIntelIndicator& WithValue(Aws::String&& value) { SetValue(std::move(value)); return *this;}
    inline ThreatIntelIndicator& WithValue(const char* value) { SetValue(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The category of a threat intelligence indicator.</p>
     */
    inline const ThreatIntelIndicatorCategory& GetCategory() const{ return m_category; }
    inline bool CategoryHasBeenSet() const { return m_categoryHasBeenSet; }
    inline void SetCategory(const ThreatIntelIndicatorCategory& value) { m_categoryHasBeenSet = true; m_category = value; }
    inline void SetCategory(ThreatIntelIndicatorCategory&& value) { m_categoryHasBeenSet = true; m_category = std::move(value); }
    inline ThreatIntelIndicator& WithCategory(const ThreatIntelIndicatorCategory& value) { SetCategory(value); return *this;}
    inline ThreatIntelIndicator& WithCategory(ThreatIntelIndicatorCategory&& value) { SetCategory(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates when the most recent instance of a threat intelligence indicator
     * was observed.</p> <p>For more information about the validation and formatting of
     * timestamp fields in Security Hub, see <a
     * href="https://docs.aws.amazon.com/securityhub/1.0/APIReference/Welcome.html#timestamps">Timestamps</a>.</p>
     */
    inline const Aws::String& GetLastObservedAt() const{ return m_lastObservedAt; }
    inline bool LastObservedAtHasBeenSet() const { return m_lastObservedAtHasBeenSet; }
    inline void SetLastObservedAt(const Aws::String& value) { m_lastObservedAtHasBeenSet = true; m_lastObservedAt = value; }
    inline void SetLastObservedAt(Aws::String&& value) { m_lastObservedAtHasBeenSet = true; m_lastObservedAt = std::move(value); }
    inline void SetLastObservedAt(const char* value) { m_lastObservedAtHasBeenSet = true; m_lastObservedAt.assign(value); }
    inline ThreatIntelIndicator& WithLastObservedAt(const Aws::String& value) { SetLastObservedAt(value); return *this;}
    inline ThreatIntelIndicator& WithLastObservedAt(Aws::String&& value) { SetLastObservedAt(std::move(value)); return *this;}
    inline ThreatIntelIndicator& WithLastObservedAt(const char* value) { SetLastObservedAt(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The source of the threat intelligence indicator.</p> <p>Length Constraints:
     * Minimum of 1 length. Maximum of 64 length.</p>
     */
    inline const Aws::String& GetSource() const{ return m_source; }
    inline bool SourceHasBeenSet() const { return m_sourceHasBeenSet; }
    inline void SetSource(const Aws::String& value) { m_sourceHasBeenSet = true; m_source = value; }
    inline void SetSource(Aws::String&& value) { m_sourceHasBeenSet = true; m_source = std::move(value); }
    inline void SetSource(const char* value) { m_sourceHasBeenSet = true; m_source.assign(value); }
    inline ThreatIntelIndicator& WithSource(const Aws::String& value) { SetSource(value); return *this;}
    inline ThreatIntelIndicator& WithSource(Aws::String&& value) { SetSource(std::move(value)); return *this;}
    inline ThreatIntelIndicator& WithSource(const char* value) { SetSource(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The URL to the page or site where you can get more information about the
     * threat intelligence indicator.</p>
     */
    inline const Aws::String& GetSourceUrl() const{ return m_sourceUrl; }
    inline bool SourceUrlHasBeenSet() const { return m_sourceUrlHasBeenSet; }
    inline void SetSourceUrl(const Aws::String& value) { m_sourceUrlHasBeenSet = true; m_sourceUrl = value; }
    inline void SetSourceUrl(Aws::String&& value) { m_sourceUrlHasBeenSet = true; m_sourceUrl = std::move(value); }
    inline void SetSourceUrl(const char* value) { m_sourceUrlHasBeenSet = true; m_sourceUrl.assign(value); }
    inline ThreatIntelIndicator& WithSourceUrl(const Aws::String& value) { SetSourceUrl(value); return *this;}
    inline ThreatIntelIndicator& WithSourceUrl(Aws::String&& value) { SetSourceUrl(std::move(value)); return *this;}
    inline ThreatIntelIndicator& WithSourceUrl(const char* value) { SetSourceUrl(value); return *this;}
    ///@}
  private:

    ThreatIntelIndicatorType m_type;
    bool m_typeHasBeenSet = false;

    Aws::String m_value;
    bool m_valueHasBeenSet = false;

    ThreatIntelIndicatorCategory m_category;
    bool m_categoryHasBeenSet = false;

    Aws::String m_lastObservedAt;
    bool m_lastObservedAtHasBeenSet = false;

    Aws::String m_source;
    bool m_sourceHasBeenSet = false;

    Aws::String m_sourceUrl;
    bool m_sourceUrlHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws

/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/s3/S3_EXPORTS.h>
#include <aws/s3/model/ExpirationState.h>
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
   * <p> The journal table record expiration settings for a journal table in an S3
   * Metadata configuration. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/s3-2006-03-01/RecordExpiration">AWS
   * API Reference</a></p>
   */
  class RecordExpiration
  {
  public:
    AWS_S3_API RecordExpiration() = default;
    AWS_S3_API RecordExpiration(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_S3_API RecordExpiration& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_S3_API void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;


    ///@{
    /**
     * <p> Specifies whether journal table record expiration is enabled or disabled.
     * </p>
     */
    inline ExpirationState GetExpiration() const { return m_expiration; }
    inline bool ExpirationHasBeenSet() const { return m_expirationHasBeenSet; }
    inline void SetExpiration(ExpirationState value) { m_expirationHasBeenSet = true; m_expiration = value; }
    inline RecordExpiration& WithExpiration(ExpirationState value) { SetExpiration(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> If you enable journal table record expiration, you can set the number of
     * days to retain your journal table records. Journal table records must be
     * retained for a minimum of 7 days. To set this value, specify any whole number
     * from <code>7</code> to <code>2147483647</code>. For example, to retain your
     * journal table records for one year, set this value to <code>365</code>. </p>
     */
    inline int GetDays() const { return m_days; }
    inline bool DaysHasBeenSet() const { return m_daysHasBeenSet; }
    inline void SetDays(int value) { m_daysHasBeenSet = true; m_days = value; }
    inline RecordExpiration& WithDays(int value) { SetDays(value); return *this;}
    ///@}
  private:

    ExpirationState m_expiration{ExpirationState::NOT_SET};
    bool m_expirationHasBeenSet = false;

    int m_days{0};
    bool m_daysHasBeenSet = false;
  };

} // namespace Model
} // namespace S3
} // namespace Aws

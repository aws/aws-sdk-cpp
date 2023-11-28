/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/qbusiness/QBusiness_EXPORTS.h>
#include <aws/qbusiness/model/ErrorDetail.h>
#include <aws/core/utils/DateTime.h>
#include <aws/qbusiness/model/GroupStatus.h>
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
namespace QBusiness
{
namespace Model
{

  /**
   * <p>Provides the details of a group's status.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/qbusiness-2023-11-27/GroupStatusDetail">AWS
   * API Reference</a></p>
   */
  class GroupStatusDetail
  {
  public:
    AWS_QBUSINESS_API GroupStatusDetail();
    AWS_QBUSINESS_API GroupStatusDetail(Aws::Utils::Json::JsonView jsonValue);
    AWS_QBUSINESS_API GroupStatusDetail& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QBUSINESS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The details of an error associated a group status.</p>
     */
    inline const ErrorDetail& GetErrorDetail() const{ return m_errorDetail; }

    /**
     * <p>The details of an error associated a group status.</p>
     */
    inline bool ErrorDetailHasBeenSet() const { return m_errorDetailHasBeenSet; }

    /**
     * <p>The details of an error associated a group status.</p>
     */
    inline void SetErrorDetail(const ErrorDetail& value) { m_errorDetailHasBeenSet = true; m_errorDetail = value; }

    /**
     * <p>The details of an error associated a group status.</p>
     */
    inline void SetErrorDetail(ErrorDetail&& value) { m_errorDetailHasBeenSet = true; m_errorDetail = std::move(value); }

    /**
     * <p>The details of an error associated a group status.</p>
     */
    inline GroupStatusDetail& WithErrorDetail(const ErrorDetail& value) { SetErrorDetail(value); return *this;}

    /**
     * <p>The details of an error associated a group status.</p>
     */
    inline GroupStatusDetail& WithErrorDetail(ErrorDetail&& value) { SetErrorDetail(std::move(value)); return *this;}


    /**
     * <p>The Unix timestamp when the Amazon Q application was last updated.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdatedAt() const{ return m_lastUpdatedAt; }

    /**
     * <p>The Unix timestamp when the Amazon Q application was last updated.</p>
     */
    inline bool LastUpdatedAtHasBeenSet() const { return m_lastUpdatedAtHasBeenSet; }

    /**
     * <p>The Unix timestamp when the Amazon Q application was last updated.</p>
     */
    inline void SetLastUpdatedAt(const Aws::Utils::DateTime& value) { m_lastUpdatedAtHasBeenSet = true; m_lastUpdatedAt = value; }

    /**
     * <p>The Unix timestamp when the Amazon Q application was last updated.</p>
     */
    inline void SetLastUpdatedAt(Aws::Utils::DateTime&& value) { m_lastUpdatedAtHasBeenSet = true; m_lastUpdatedAt = std::move(value); }

    /**
     * <p>The Unix timestamp when the Amazon Q application was last updated.</p>
     */
    inline GroupStatusDetail& WithLastUpdatedAt(const Aws::Utils::DateTime& value) { SetLastUpdatedAt(value); return *this;}

    /**
     * <p>The Unix timestamp when the Amazon Q application was last updated.</p>
     */
    inline GroupStatusDetail& WithLastUpdatedAt(Aws::Utils::DateTime&& value) { SetLastUpdatedAt(std::move(value)); return *this;}


    /**
     * <p>The status of a group.</p>
     */
    inline const GroupStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The status of a group.</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>The status of a group.</p>
     */
    inline void SetStatus(const GroupStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The status of a group.</p>
     */
    inline void SetStatus(GroupStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The status of a group.</p>
     */
    inline GroupStatusDetail& WithStatus(const GroupStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The status of a group.</p>
     */
    inline GroupStatusDetail& WithStatus(GroupStatus&& value) { SetStatus(std::move(value)); return *this;}

  private:

    ErrorDetail m_errorDetail;
    bool m_errorDetailHasBeenSet = false;

    Aws::Utils::DateTime m_lastUpdatedAt;
    bool m_lastUpdatedAtHasBeenSet = false;

    GroupStatus m_status;
    bool m_statusHasBeenSet = false;
  };

} // namespace Model
} // namespace QBusiness
} // namespace Aws

/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/model/QSearchStatus.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace QuickSight
{
namespace Model
{
  class UpdateQuickSightQSearchConfigurationResult
  {
  public:
    AWS_QUICKSIGHT_API UpdateQuickSightQSearchConfigurationResult();
    AWS_QUICKSIGHT_API UpdateQuickSightQSearchConfigurationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_QUICKSIGHT_API UpdateQuickSightQSearchConfigurationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The status of the Amazon QuickSight Q Search configuration.</p>
     */
    inline const QSearchStatus& GetQSearchStatus() const{ return m_qSearchStatus; }
    inline void SetQSearchStatus(const QSearchStatus& value) { m_qSearchStatus = value; }
    inline void SetQSearchStatus(QSearchStatus&& value) { m_qSearchStatus = std::move(value); }
    inline UpdateQuickSightQSearchConfigurationResult& WithQSearchStatus(const QSearchStatus& value) { SetQSearchStatus(value); return *this;}
    inline UpdateQuickSightQSearchConfigurationResult& WithQSearchStatus(QSearchStatus&& value) { SetQSearchStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline UpdateQuickSightQSearchConfigurationResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline UpdateQuickSightQSearchConfigurationResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline UpdateQuickSightQSearchConfigurationResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The HTTP status of the request.</p>
     */
    inline int GetStatus() const{ return m_status; }
    inline void SetStatus(int value) { m_status = value; }
    inline UpdateQuickSightQSearchConfigurationResult& WithStatus(int value) { SetStatus(value); return *this;}
    ///@}
  private:

    QSearchStatus m_qSearchStatus;

    Aws::String m_requestId;

    int m_status;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws

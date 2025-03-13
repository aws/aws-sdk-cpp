/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rds/RDS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/rds/model/ResponseMetadata.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Xml
{
  class XmlDocument;
} // namespace Xml
} // namespace Utils
namespace RDS
{
namespace Model
{
  class ModifyCurrentDBClusterCapacityResult
  {
  public:
    AWS_RDS_API ModifyCurrentDBClusterCapacityResult() = default;
    AWS_RDS_API ModifyCurrentDBClusterCapacityResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_RDS_API ModifyCurrentDBClusterCapacityResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>A user-supplied DB cluster identifier. This identifier is the unique key that
     * identifies a DB cluster.</p>
     */
    inline const Aws::String& GetDBClusterIdentifier() const { return m_dBClusterIdentifier; }
    template<typename DBClusterIdentifierT = Aws::String>
    void SetDBClusterIdentifier(DBClusterIdentifierT&& value) { m_dBClusterIdentifierHasBeenSet = true; m_dBClusterIdentifier = std::forward<DBClusterIdentifierT>(value); }
    template<typename DBClusterIdentifierT = Aws::String>
    ModifyCurrentDBClusterCapacityResult& WithDBClusterIdentifier(DBClusterIdentifierT&& value) { SetDBClusterIdentifier(std::forward<DBClusterIdentifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A value that specifies the capacity that the DB cluster scales to next.</p>
     */
    inline int GetPendingCapacity() const { return m_pendingCapacity; }
    inline void SetPendingCapacity(int value) { m_pendingCapacityHasBeenSet = true; m_pendingCapacity = value; }
    inline ModifyCurrentDBClusterCapacityResult& WithPendingCapacity(int value) { SetPendingCapacity(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current capacity of the DB cluster.</p>
     */
    inline int GetCurrentCapacity() const { return m_currentCapacity; }
    inline void SetCurrentCapacity(int value) { m_currentCapacityHasBeenSet = true; m_currentCapacity = value; }
    inline ModifyCurrentDBClusterCapacityResult& WithCurrentCapacity(int value) { SetCurrentCapacity(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of seconds before a call to
     * <code>ModifyCurrentDBClusterCapacity</code> times out.</p>
     */
    inline int GetSecondsBeforeTimeout() const { return m_secondsBeforeTimeout; }
    inline void SetSecondsBeforeTimeout(int value) { m_secondsBeforeTimeoutHasBeenSet = true; m_secondsBeforeTimeout = value; }
    inline ModifyCurrentDBClusterCapacityResult& WithSecondsBeforeTimeout(int value) { SetSecondsBeforeTimeout(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timeout action of a call to <code>ModifyCurrentDBClusterCapacity</code>,
     * either <code>ForceApplyCapacityChange</code> or
     * <code>RollbackCapacityChange</code>.</p>
     */
    inline const Aws::String& GetTimeoutAction() const { return m_timeoutAction; }
    template<typename TimeoutActionT = Aws::String>
    void SetTimeoutAction(TimeoutActionT&& value) { m_timeoutActionHasBeenSet = true; m_timeoutAction = std::forward<TimeoutActionT>(value); }
    template<typename TimeoutActionT = Aws::String>
    ModifyCurrentDBClusterCapacityResult& WithTimeoutAction(TimeoutActionT&& value) { SetTimeoutAction(std::forward<TimeoutActionT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const { return m_responseMetadata; }
    template<typename ResponseMetadataT = ResponseMetadata>
    void SetResponseMetadata(ResponseMetadataT&& value) { m_responseMetadataHasBeenSet = true; m_responseMetadata = std::forward<ResponseMetadataT>(value); }
    template<typename ResponseMetadataT = ResponseMetadata>
    ModifyCurrentDBClusterCapacityResult& WithResponseMetadata(ResponseMetadataT&& value) { SetResponseMetadata(std::forward<ResponseMetadataT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_dBClusterIdentifier;
    bool m_dBClusterIdentifierHasBeenSet = false;

    int m_pendingCapacity{0};
    bool m_pendingCapacityHasBeenSet = false;

    int m_currentCapacity{0};
    bool m_currentCapacityHasBeenSet = false;

    int m_secondsBeforeTimeout{0};
    bool m_secondsBeforeTimeoutHasBeenSet = false;

    Aws::String m_timeoutAction;
    bool m_timeoutActionHasBeenSet = false;

    ResponseMetadata m_responseMetadata;
    bool m_responseMetadataHasBeenSet = false;
  };

} // namespace Model
} // namespace RDS
} // namespace Aws

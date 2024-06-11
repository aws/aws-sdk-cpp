﻿/**
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
    AWS_RDS_API ModifyCurrentDBClusterCapacityResult();
    AWS_RDS_API ModifyCurrentDBClusterCapacityResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_RDS_API ModifyCurrentDBClusterCapacityResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>A user-supplied DB cluster identifier. This identifier is the unique key that
     * identifies a DB cluster.</p>
     */
    inline const Aws::String& GetDBClusterIdentifier() const{ return m_dBClusterIdentifier; }
    inline void SetDBClusterIdentifier(const Aws::String& value) { m_dBClusterIdentifier = value; }
    inline void SetDBClusterIdentifier(Aws::String&& value) { m_dBClusterIdentifier = std::move(value); }
    inline void SetDBClusterIdentifier(const char* value) { m_dBClusterIdentifier.assign(value); }
    inline ModifyCurrentDBClusterCapacityResult& WithDBClusterIdentifier(const Aws::String& value) { SetDBClusterIdentifier(value); return *this;}
    inline ModifyCurrentDBClusterCapacityResult& WithDBClusterIdentifier(Aws::String&& value) { SetDBClusterIdentifier(std::move(value)); return *this;}
    inline ModifyCurrentDBClusterCapacityResult& WithDBClusterIdentifier(const char* value) { SetDBClusterIdentifier(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A value that specifies the capacity that the DB cluster scales to next.</p>
     */
    inline int GetPendingCapacity() const{ return m_pendingCapacity; }
    inline void SetPendingCapacity(int value) { m_pendingCapacity = value; }
    inline ModifyCurrentDBClusterCapacityResult& WithPendingCapacity(int value) { SetPendingCapacity(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current capacity of the DB cluster.</p>
     */
    inline int GetCurrentCapacity() const{ return m_currentCapacity; }
    inline void SetCurrentCapacity(int value) { m_currentCapacity = value; }
    inline ModifyCurrentDBClusterCapacityResult& WithCurrentCapacity(int value) { SetCurrentCapacity(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of seconds before a call to
     * <code>ModifyCurrentDBClusterCapacity</code> times out.</p>
     */
    inline int GetSecondsBeforeTimeout() const{ return m_secondsBeforeTimeout; }
    inline void SetSecondsBeforeTimeout(int value) { m_secondsBeforeTimeout = value; }
    inline ModifyCurrentDBClusterCapacityResult& WithSecondsBeforeTimeout(int value) { SetSecondsBeforeTimeout(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timeout action of a call to <code>ModifyCurrentDBClusterCapacity</code>,
     * either <code>ForceApplyCapacityChange</code> or
     * <code>RollbackCapacityChange</code>.</p>
     */
    inline const Aws::String& GetTimeoutAction() const{ return m_timeoutAction; }
    inline void SetTimeoutAction(const Aws::String& value) { m_timeoutAction = value; }
    inline void SetTimeoutAction(Aws::String&& value) { m_timeoutAction = std::move(value); }
    inline void SetTimeoutAction(const char* value) { m_timeoutAction.assign(value); }
    inline ModifyCurrentDBClusterCapacityResult& WithTimeoutAction(const Aws::String& value) { SetTimeoutAction(value); return *this;}
    inline ModifyCurrentDBClusterCapacityResult& WithTimeoutAction(Aws::String&& value) { SetTimeoutAction(std::move(value)); return *this;}
    inline ModifyCurrentDBClusterCapacityResult& WithTimeoutAction(const char* value) { SetTimeoutAction(value); return *this;}
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }
    inline ModifyCurrentDBClusterCapacityResult& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}
    inline ModifyCurrentDBClusterCapacityResult& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_dBClusterIdentifier;

    int m_pendingCapacity;

    int m_currentCapacity;

    int m_secondsBeforeTimeout;

    Aws::String m_timeoutAction;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace RDS
} // namespace Aws

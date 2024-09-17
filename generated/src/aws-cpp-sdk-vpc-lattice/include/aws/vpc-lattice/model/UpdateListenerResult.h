/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/vpc-lattice/VPCLattice_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/vpc-lattice/model/RuleAction.h>
#include <aws/vpc-lattice/model/ListenerProtocol.h>
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
namespace VPCLattice
{
namespace Model
{
  class UpdateListenerResult
  {
  public:
    AWS_VPCLATTICE_API UpdateListenerResult();
    AWS_VPCLATTICE_API UpdateListenerResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_VPCLATTICE_API UpdateListenerResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the listener.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }
    inline void SetArn(const Aws::String& value) { m_arn = value; }
    inline void SetArn(Aws::String&& value) { m_arn = std::move(value); }
    inline void SetArn(const char* value) { m_arn.assign(value); }
    inline UpdateListenerResult& WithArn(const Aws::String& value) { SetArn(value); return *this;}
    inline UpdateListenerResult& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}
    inline UpdateListenerResult& WithArn(const char* value) { SetArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The action for the default rule.</p>
     */
    inline const RuleAction& GetDefaultAction() const{ return m_defaultAction; }
    inline void SetDefaultAction(const RuleAction& value) { m_defaultAction = value; }
    inline void SetDefaultAction(RuleAction&& value) { m_defaultAction = std::move(value); }
    inline UpdateListenerResult& WithDefaultAction(const RuleAction& value) { SetDefaultAction(value); return *this;}
    inline UpdateListenerResult& WithDefaultAction(RuleAction&& value) { SetDefaultAction(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the listener.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }
    inline void SetId(const Aws::String& value) { m_id = value; }
    inline void SetId(Aws::String&& value) { m_id = std::move(value); }
    inline void SetId(const char* value) { m_id.assign(value); }
    inline UpdateListenerResult& WithId(const Aws::String& value) { SetId(value); return *this;}
    inline UpdateListenerResult& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}
    inline UpdateListenerResult& WithId(const char* value) { SetId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the listener.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline void SetName(const Aws::String& value) { m_name = value; }
    inline void SetName(Aws::String&& value) { m_name = std::move(value); }
    inline void SetName(const char* value) { m_name.assign(value); }
    inline UpdateListenerResult& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline UpdateListenerResult& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline UpdateListenerResult& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The listener port.</p>
     */
    inline int GetPort() const{ return m_port; }
    inline void SetPort(int value) { m_port = value; }
    inline UpdateListenerResult& WithPort(int value) { SetPort(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The protocol of the listener.</p>
     */
    inline const ListenerProtocol& GetProtocol() const{ return m_protocol; }
    inline void SetProtocol(const ListenerProtocol& value) { m_protocol = value; }
    inline void SetProtocol(ListenerProtocol&& value) { m_protocol = std::move(value); }
    inline UpdateListenerResult& WithProtocol(const ListenerProtocol& value) { SetProtocol(value); return *this;}
    inline UpdateListenerResult& WithProtocol(ListenerProtocol&& value) { SetProtocol(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the service.</p>
     */
    inline const Aws::String& GetServiceArn() const{ return m_serviceArn; }
    inline void SetServiceArn(const Aws::String& value) { m_serviceArn = value; }
    inline void SetServiceArn(Aws::String&& value) { m_serviceArn = std::move(value); }
    inline void SetServiceArn(const char* value) { m_serviceArn.assign(value); }
    inline UpdateListenerResult& WithServiceArn(const Aws::String& value) { SetServiceArn(value); return *this;}
    inline UpdateListenerResult& WithServiceArn(Aws::String&& value) { SetServiceArn(std::move(value)); return *this;}
    inline UpdateListenerResult& WithServiceArn(const char* value) { SetServiceArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the service.</p>
     */
    inline const Aws::String& GetServiceId() const{ return m_serviceId; }
    inline void SetServiceId(const Aws::String& value) { m_serviceId = value; }
    inline void SetServiceId(Aws::String&& value) { m_serviceId = std::move(value); }
    inline void SetServiceId(const char* value) { m_serviceId.assign(value); }
    inline UpdateListenerResult& WithServiceId(const Aws::String& value) { SetServiceId(value); return *this;}
    inline UpdateListenerResult& WithServiceId(Aws::String&& value) { SetServiceId(std::move(value)); return *this;}
    inline UpdateListenerResult& WithServiceId(const char* value) { SetServiceId(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline UpdateListenerResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline UpdateListenerResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline UpdateListenerResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_arn;

    RuleAction m_defaultAction;

    Aws::String m_id;

    Aws::String m_name;

    int m_port;

    ListenerProtocol m_protocol;

    Aws::String m_serviceArn;

    Aws::String m_serviceId;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace VPCLattice
} // namespace Aws

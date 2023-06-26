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
  class CreateListenerResult
  {
  public:
    AWS_VPCLATTICE_API CreateListenerResult();
    AWS_VPCLATTICE_API CreateListenerResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_VPCLATTICE_API CreateListenerResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The Amazon Resource Name (ARN) of the listener.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the listener.</p>
     */
    inline void SetArn(const Aws::String& value) { m_arn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the listener.</p>
     */
    inline void SetArn(Aws::String&& value) { m_arn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the listener.</p>
     */
    inline void SetArn(const char* value) { m_arn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the listener.</p>
     */
    inline CreateListenerResult& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the listener.</p>
     */
    inline CreateListenerResult& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the listener.</p>
     */
    inline CreateListenerResult& WithArn(const char* value) { SetArn(value); return *this;}


    /**
     * <p>The action for the default rule.</p>
     */
    inline const RuleAction& GetDefaultAction() const{ return m_defaultAction; }

    /**
     * <p>The action for the default rule.</p>
     */
    inline void SetDefaultAction(const RuleAction& value) { m_defaultAction = value; }

    /**
     * <p>The action for the default rule.</p>
     */
    inline void SetDefaultAction(RuleAction&& value) { m_defaultAction = std::move(value); }

    /**
     * <p>The action for the default rule.</p>
     */
    inline CreateListenerResult& WithDefaultAction(const RuleAction& value) { SetDefaultAction(value); return *this;}

    /**
     * <p>The action for the default rule.</p>
     */
    inline CreateListenerResult& WithDefaultAction(RuleAction&& value) { SetDefaultAction(std::move(value)); return *this;}


    /**
     * <p>The ID of the listener.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p>The ID of the listener.</p>
     */
    inline void SetId(const Aws::String& value) { m_id = value; }

    /**
     * <p>The ID of the listener.</p>
     */
    inline void SetId(Aws::String&& value) { m_id = std::move(value); }

    /**
     * <p>The ID of the listener.</p>
     */
    inline void SetId(const char* value) { m_id.assign(value); }

    /**
     * <p>The ID of the listener.</p>
     */
    inline CreateListenerResult& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p>The ID of the listener.</p>
     */
    inline CreateListenerResult& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p>The ID of the listener.</p>
     */
    inline CreateListenerResult& WithId(const char* value) { SetId(value); return *this;}


    /**
     * <p>The name of the listener.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the listener.</p>
     */
    inline void SetName(const Aws::String& value) { m_name = value; }

    /**
     * <p>The name of the listener.</p>
     */
    inline void SetName(Aws::String&& value) { m_name = std::move(value); }

    /**
     * <p>The name of the listener.</p>
     */
    inline void SetName(const char* value) { m_name.assign(value); }

    /**
     * <p>The name of the listener.</p>
     */
    inline CreateListenerResult& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the listener.</p>
     */
    inline CreateListenerResult& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the listener.</p>
     */
    inline CreateListenerResult& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The port number of the listener.</p>
     */
    inline int GetPort() const{ return m_port; }

    /**
     * <p>The port number of the listener.</p>
     */
    inline void SetPort(int value) { m_port = value; }

    /**
     * <p>The port number of the listener.</p>
     */
    inline CreateListenerResult& WithPort(int value) { SetPort(value); return *this;}


    /**
     * <p>The protocol of the listener.</p>
     */
    inline const ListenerProtocol& GetProtocol() const{ return m_protocol; }

    /**
     * <p>The protocol of the listener.</p>
     */
    inline void SetProtocol(const ListenerProtocol& value) { m_protocol = value; }

    /**
     * <p>The protocol of the listener.</p>
     */
    inline void SetProtocol(ListenerProtocol&& value) { m_protocol = std::move(value); }

    /**
     * <p>The protocol of the listener.</p>
     */
    inline CreateListenerResult& WithProtocol(const ListenerProtocol& value) { SetProtocol(value); return *this;}

    /**
     * <p>The protocol of the listener.</p>
     */
    inline CreateListenerResult& WithProtocol(ListenerProtocol&& value) { SetProtocol(std::move(value)); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the service.</p>
     */
    inline const Aws::String& GetServiceArn() const{ return m_serviceArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the service.</p>
     */
    inline void SetServiceArn(const Aws::String& value) { m_serviceArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the service.</p>
     */
    inline void SetServiceArn(Aws::String&& value) { m_serviceArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the service.</p>
     */
    inline void SetServiceArn(const char* value) { m_serviceArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the service.</p>
     */
    inline CreateListenerResult& WithServiceArn(const Aws::String& value) { SetServiceArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the service.</p>
     */
    inline CreateListenerResult& WithServiceArn(Aws::String&& value) { SetServiceArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the service.</p>
     */
    inline CreateListenerResult& WithServiceArn(const char* value) { SetServiceArn(value); return *this;}


    /**
     * <p>The ID of the service.</p>
     */
    inline const Aws::String& GetServiceId() const{ return m_serviceId; }

    /**
     * <p>The ID of the service.</p>
     */
    inline void SetServiceId(const Aws::String& value) { m_serviceId = value; }

    /**
     * <p>The ID of the service.</p>
     */
    inline void SetServiceId(Aws::String&& value) { m_serviceId = std::move(value); }

    /**
     * <p>The ID of the service.</p>
     */
    inline void SetServiceId(const char* value) { m_serviceId.assign(value); }

    /**
     * <p>The ID of the service.</p>
     */
    inline CreateListenerResult& WithServiceId(const Aws::String& value) { SetServiceId(value); return *this;}

    /**
     * <p>The ID of the service.</p>
     */
    inline CreateListenerResult& WithServiceId(Aws::String&& value) { SetServiceId(std::move(value)); return *this;}

    /**
     * <p>The ID of the service.</p>
     */
    inline CreateListenerResult& WithServiceId(const char* value) { SetServiceId(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline CreateListenerResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline CreateListenerResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline CreateListenerResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

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

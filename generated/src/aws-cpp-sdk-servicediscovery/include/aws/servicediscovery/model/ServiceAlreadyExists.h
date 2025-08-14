/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/servicediscovery/ServiceDiscovery_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace ServiceDiscovery
{
namespace Model
{

  /**
   * <p>The service can't be created because a service with the same name already
   * exists.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/servicediscovery-2017-03-14/ServiceAlreadyExists">AWS
   * API Reference</a></p>
   */
  class ServiceAlreadyExists
  {
  public:
    AWS_SERVICEDISCOVERY_API ServiceAlreadyExists() = default;
    AWS_SERVICEDISCOVERY_API ServiceAlreadyExists(Aws::Utils::Json::JsonView jsonValue);
    AWS_SERVICEDISCOVERY_API ServiceAlreadyExists& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SERVICEDISCOVERY_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    
    inline const Aws::String& GetMessage() const { return m_message; }
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }
    template<typename MessageT = Aws::String>
    void SetMessage(MessageT&& value) { m_messageHasBeenSet = true; m_message = std::forward<MessageT>(value); }
    template<typename MessageT = Aws::String>
    ServiceAlreadyExists& WithMessage(MessageT&& value) { SetMessage(std::forward<MessageT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The <code>CreatorRequestId</code> that was used to create the service.</p>
     */
    inline const Aws::String& GetCreatorRequestId() const { return m_creatorRequestId; }
    inline bool CreatorRequestIdHasBeenSet() const { return m_creatorRequestIdHasBeenSet; }
    template<typename CreatorRequestIdT = Aws::String>
    void SetCreatorRequestId(CreatorRequestIdT&& value) { m_creatorRequestIdHasBeenSet = true; m_creatorRequestId = std::forward<CreatorRequestIdT>(value); }
    template<typename CreatorRequestIdT = Aws::String>
    ServiceAlreadyExists& WithCreatorRequestId(CreatorRequestIdT&& value) { SetCreatorRequestId(std::forward<CreatorRequestIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the existing service.</p>
     */
    inline const Aws::String& GetServiceId() const { return m_serviceId; }
    inline bool ServiceIdHasBeenSet() const { return m_serviceIdHasBeenSet; }
    template<typename ServiceIdT = Aws::String>
    void SetServiceId(ServiceIdT&& value) { m_serviceIdHasBeenSet = true; m_serviceId = std::forward<ServiceIdT>(value); }
    template<typename ServiceIdT = Aws::String>
    ServiceAlreadyExists& WithServiceId(ServiceIdT&& value) { SetServiceId(std::forward<ServiceIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the existing service.</p>
     */
    inline const Aws::String& GetServiceArn() const { return m_serviceArn; }
    inline bool ServiceArnHasBeenSet() const { return m_serviceArnHasBeenSet; }
    template<typename ServiceArnT = Aws::String>
    void SetServiceArn(ServiceArnT&& value) { m_serviceArnHasBeenSet = true; m_serviceArn = std::forward<ServiceArnT>(value); }
    template<typename ServiceArnT = Aws::String>
    ServiceAlreadyExists& WithServiceArn(ServiceArnT&& value) { SetServiceArn(std::forward<ServiceArnT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_message;
    bool m_messageHasBeenSet = false;

    Aws::String m_creatorRequestId;
    bool m_creatorRequestIdHasBeenSet = false;

    Aws::String m_serviceId;
    bool m_serviceIdHasBeenSet = false;

    Aws::String m_serviceArn;
    bool m_serviceArnHasBeenSet = false;
  };

} // namespace Model
} // namespace ServiceDiscovery
} // namespace Aws

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
    AWS_SERVICEDISCOVERY_API ServiceAlreadyExists();
    AWS_SERVICEDISCOVERY_API ServiceAlreadyExists(Aws::Utils::Json::JsonView jsonValue);
    AWS_SERVICEDISCOVERY_API ServiceAlreadyExists& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SERVICEDISCOVERY_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    
    inline const Aws::String& GetMessage() const{ return m_message; }
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }
    inline void SetMessage(const Aws::String& value) { m_messageHasBeenSet = true; m_message = value; }
    inline void SetMessage(Aws::String&& value) { m_messageHasBeenSet = true; m_message = std::move(value); }
    inline void SetMessage(const char* value) { m_messageHasBeenSet = true; m_message.assign(value); }
    inline ServiceAlreadyExists& WithMessage(const Aws::String& value) { SetMessage(value); return *this;}
    inline ServiceAlreadyExists& WithMessage(Aws::String&& value) { SetMessage(std::move(value)); return *this;}
    inline ServiceAlreadyExists& WithMessage(const char* value) { SetMessage(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The <code>CreatorRequestId</code> that was used to create the service.</p>
     */
    inline const Aws::String& GetCreatorRequestId() const{ return m_creatorRequestId; }
    inline bool CreatorRequestIdHasBeenSet() const { return m_creatorRequestIdHasBeenSet; }
    inline void SetCreatorRequestId(const Aws::String& value) { m_creatorRequestIdHasBeenSet = true; m_creatorRequestId = value; }
    inline void SetCreatorRequestId(Aws::String&& value) { m_creatorRequestIdHasBeenSet = true; m_creatorRequestId = std::move(value); }
    inline void SetCreatorRequestId(const char* value) { m_creatorRequestIdHasBeenSet = true; m_creatorRequestId.assign(value); }
    inline ServiceAlreadyExists& WithCreatorRequestId(const Aws::String& value) { SetCreatorRequestId(value); return *this;}
    inline ServiceAlreadyExists& WithCreatorRequestId(Aws::String&& value) { SetCreatorRequestId(std::move(value)); return *this;}
    inline ServiceAlreadyExists& WithCreatorRequestId(const char* value) { SetCreatorRequestId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the existing service.</p>
     */
    inline const Aws::String& GetServiceId() const{ return m_serviceId; }
    inline bool ServiceIdHasBeenSet() const { return m_serviceIdHasBeenSet; }
    inline void SetServiceId(const Aws::String& value) { m_serviceIdHasBeenSet = true; m_serviceId = value; }
    inline void SetServiceId(Aws::String&& value) { m_serviceIdHasBeenSet = true; m_serviceId = std::move(value); }
    inline void SetServiceId(const char* value) { m_serviceIdHasBeenSet = true; m_serviceId.assign(value); }
    inline ServiceAlreadyExists& WithServiceId(const Aws::String& value) { SetServiceId(value); return *this;}
    inline ServiceAlreadyExists& WithServiceId(Aws::String&& value) { SetServiceId(std::move(value)); return *this;}
    inline ServiceAlreadyExists& WithServiceId(const char* value) { SetServiceId(value); return *this;}
    ///@}
  private:

    Aws::String m_message;
    bool m_messageHasBeenSet = false;

    Aws::String m_creatorRequestId;
    bool m_creatorRequestIdHasBeenSet = false;

    Aws::String m_serviceId;
    bool m_serviceIdHasBeenSet = false;
  };

} // namespace Model
} // namespace ServiceDiscovery
} // namespace Aws

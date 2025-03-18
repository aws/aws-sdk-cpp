/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/s3/S3_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/s3/model/Event.h>
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
   * <p>Container for specifying the Lambda notification configuration.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/s3-2006-03-01/CloudFunctionConfiguration">AWS
   * API Reference</a></p>
   */
  class CloudFunctionConfiguration
  {
  public:
    AWS_S3_API CloudFunctionConfiguration() = default;
    AWS_S3_API CloudFunctionConfiguration(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_S3_API CloudFunctionConfiguration& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_S3_API void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;


    ///@{
    
    inline const Aws::String& GetId() const { return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    template<typename IdT = Aws::String>
    void SetId(IdT&& value) { m_idHasBeenSet = true; m_id = std::forward<IdT>(value); }
    template<typename IdT = Aws::String>
    CloudFunctionConfiguration& WithId(IdT&& value) { SetId(std::forward<IdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Bucket events for which to send notifications.</p>
     */
    inline const Aws::Vector<Event>& GetEvents() const { return m_events; }
    inline bool EventsHasBeenSet() const { return m_eventsHasBeenSet; }
    template<typename EventsT = Aws::Vector<Event>>
    void SetEvents(EventsT&& value) { m_eventsHasBeenSet = true; m_events = std::forward<EventsT>(value); }
    template<typename EventsT = Aws::Vector<Event>>
    CloudFunctionConfiguration& WithEvents(EventsT&& value) { SetEvents(std::forward<EventsT>(value)); return *this;}
    inline CloudFunctionConfiguration& AddEvents(Event value) { m_eventsHasBeenSet = true; m_events.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>Lambda cloud function ARN that Amazon S3 can invoke when it detects events of
     * the specified type.</p>
     */
    inline const Aws::String& GetCloudFunction() const { return m_cloudFunction; }
    inline bool CloudFunctionHasBeenSet() const { return m_cloudFunctionHasBeenSet; }
    template<typename CloudFunctionT = Aws::String>
    void SetCloudFunction(CloudFunctionT&& value) { m_cloudFunctionHasBeenSet = true; m_cloudFunction = std::forward<CloudFunctionT>(value); }
    template<typename CloudFunctionT = Aws::String>
    CloudFunctionConfiguration& WithCloudFunction(CloudFunctionT&& value) { SetCloudFunction(std::forward<CloudFunctionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The role supporting the invocation of the Lambda function</p>
     */
    inline const Aws::String& GetInvocationRole() const { return m_invocationRole; }
    inline bool InvocationRoleHasBeenSet() const { return m_invocationRoleHasBeenSet; }
    template<typename InvocationRoleT = Aws::String>
    void SetInvocationRole(InvocationRoleT&& value) { m_invocationRoleHasBeenSet = true; m_invocationRole = std::forward<InvocationRoleT>(value); }
    template<typename InvocationRoleT = Aws::String>
    CloudFunctionConfiguration& WithInvocationRole(InvocationRoleT&& value) { SetInvocationRole(std::forward<InvocationRoleT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::Vector<Event> m_events;
    bool m_eventsHasBeenSet = false;

    Aws::String m_cloudFunction;
    bool m_cloudFunctionHasBeenSet = false;

    Aws::String m_invocationRole;
    bool m_invocationRoleHasBeenSet = false;
  };

} // namespace Model
} // namespace S3
} // namespace Aws

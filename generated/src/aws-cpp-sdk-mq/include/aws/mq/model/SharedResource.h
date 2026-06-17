/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/mq/MQ_EXPORTS.h>
#include <aws/mq/model/SharedResourceError.h>
#include <aws/mq/model/SharedResourceStatus.h>
#include <aws/mq/model/SharedResourceType.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace MQ {
namespace Model {

/**
 * <p>Represents a resource that is shared with the broker, including its type,
 * ARN, and current status.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/mq-2017-11-27/SharedResource">AWS
 * API Reference</a></p>
 */
class SharedResource {
 public:
  AWS_MQ_API SharedResource() = default;
  AWS_MQ_API SharedResource(Aws::Utils::Json::JsonView jsonValue);
  AWS_MQ_API SharedResource& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_MQ_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The DNS names accessible by the broker.</p>
   */
  inline const Aws::Vector<Aws::String>& GetDnsNames() const { return m_dnsNames; }
  inline bool DnsNamesHasBeenSet() const { return m_dnsNamesHasBeenSet; }
  template <typename DnsNamesT = Aws::Vector<Aws::String>>
  void SetDnsNames(DnsNamesT&& value) {
    m_dnsNamesHasBeenSet = true;
    m_dnsNames = std::forward<DnsNamesT>(value);
  }
  template <typename DnsNamesT = Aws::Vector<Aws::String>>
  SharedResource& WithDnsNames(DnsNamesT&& value) {
    SetDnsNames(std::forward<DnsNamesT>(value));
    return *this;
  }
  template <typename DnsNamesT = Aws::String>
  SharedResource& AddDnsNames(DnsNamesT&& value) {
    m_dnsNamesHasBeenSet = true;
    m_dnsNames.emplace_back(std::forward<DnsNamesT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Information on the error encountered by the resource.</p>
   */
  inline const SharedResourceError& GetError() const { return m_error; }
  inline bool ErrorHasBeenSet() const { return m_errorHasBeenSet; }
  template <typename ErrorT = SharedResourceError>
  void SetError(ErrorT&& value) {
    m_errorHasBeenSet = true;
    m_error = std::forward<ErrorT>(value);
  }
  template <typename ErrorT = SharedResourceError>
  SharedResource& WithError(ErrorT&& value) {
    SetError(std::forward<ErrorT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ARN of the shared resource.</p>
   */
  inline const Aws::String& GetResourceArn() const { return m_resourceArn; }
  inline bool ResourceArnHasBeenSet() const { return m_resourceArnHasBeenSet; }
  template <typename ResourceArnT = Aws::String>
  void SetResourceArn(ResourceArnT&& value) {
    m_resourceArnHasBeenSet = true;
    m_resourceArn = std::forward<ResourceArnT>(value);
  }
  template <typename ResourceArnT = Aws::String>
  SharedResource& WithResourceArn(ResourceArnT&& value) {
    SetResourceArn(std::forward<ResourceArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The resource share ARNs to which the resource belongs.</p>
   */
  inline const Aws::Vector<Aws::String>& GetResourceShareArns() const { return m_resourceShareArns; }
  inline bool ResourceShareArnsHasBeenSet() const { return m_resourceShareArnsHasBeenSet; }
  template <typename ResourceShareArnsT = Aws::Vector<Aws::String>>
  void SetResourceShareArns(ResourceShareArnsT&& value) {
    m_resourceShareArnsHasBeenSet = true;
    m_resourceShareArns = std::forward<ResourceShareArnsT>(value);
  }
  template <typename ResourceShareArnsT = Aws::Vector<Aws::String>>
  SharedResource& WithResourceShareArns(ResourceShareArnsT&& value) {
    SetResourceShareArns(std::forward<ResourceShareArnsT>(value));
    return *this;
  }
  template <typename ResourceShareArnsT = Aws::String>
  SharedResource& AddResourceShareArns(ResourceShareArnsT&& value) {
    m_resourceShareArnsHasBeenSet = true;
    m_resourceShareArns.emplace_back(std::forward<ResourceShareArnsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The status of the shared resource.</p>
   */
  inline SharedResourceStatus GetStatus() const { return m_status; }
  inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
  inline void SetStatus(SharedResourceStatus value) {
    m_statusHasBeenSet = true;
    m_status = value;
  }
  inline SharedResource& WithStatus(SharedResourceStatus value) {
    SetStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The type of shared resource.</p>
   */
  inline SharedResourceType GetType() const { return m_type; }
  inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
  inline void SetType(SharedResourceType value) {
    m_typeHasBeenSet = true;
    m_type = value;
  }
  inline SharedResource& WithType(SharedResourceType value) {
    SetType(value);
    return *this;
  }
  ///@}
 private:
  Aws::Vector<Aws::String> m_dnsNames;

  SharedResourceError m_error;

  Aws::String m_resourceArn;

  Aws::Vector<Aws::String> m_resourceShareArns;

  SharedResourceStatus m_status{SharedResourceStatus::NOT_SET};

  SharedResourceType m_type{SharedResourceType::NOT_SET};
  bool m_dnsNamesHasBeenSet = false;
  bool m_errorHasBeenSet = false;
  bool m_resourceArnHasBeenSet = false;
  bool m_resourceShareArnsHasBeenSet = false;
  bool m_statusHasBeenSet = false;
  bool m_typeHasBeenSet = false;
};

}  // namespace Model
}  // namespace MQ
}  // namespace Aws

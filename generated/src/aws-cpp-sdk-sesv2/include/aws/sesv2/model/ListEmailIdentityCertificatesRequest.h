/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sesv2/SESV2Request.h>
#include <aws/sesv2/SESV2_EXPORTS.h>

#include <utility>

namespace Aws {
namespace SESV2 {
namespace Model {

/**
 * <p>A request to list the S/MIME certificates that are associated with an email
 * identity.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/sesv2-2019-09-27/ListEmailIdentityCertificatesRequest">AWS
 * API Reference</a></p>
 */
class ListEmailIdentityCertificatesRequest : public SESV2Request {
 public:
  AWS_SESV2_API ListEmailIdentityCertificatesRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "ListEmailIdentityCertificates"; }

  AWS_SESV2_API Aws::String SerializePayload() const override;

  ///@{
  /**
   * <p>The email identity whose certificate associations you want to list.</p>
   */
  inline const Aws::String& GetEmailIdentity() const { return m_emailIdentity; }
  inline bool EmailIdentityHasBeenSet() const { return m_emailIdentityHasBeenSet; }
  template <typename EmailIdentityT = Aws::String>
  void SetEmailIdentity(EmailIdentityT&& value) {
    m_emailIdentityHasBeenSet = true;
    m_emailIdentity = std::forward<EmailIdentityT>(value);
  }
  template <typename EmailIdentityT = Aws::String>
  ListEmailIdentityCertificatesRequest& WithEmailIdentity(EmailIdentityT&& value) {
    SetEmailIdentity(std::forward<EmailIdentityT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A token returned from a previous call to
   * <code>ListEmailIdentityCertificates</code> to indicate the position in the list
   * of certificates.</p>
   */
  inline const Aws::String& GetNextToken() const { return m_nextToken; }
  inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
  template <typename NextTokenT = Aws::String>
  void SetNextToken(NextTokenT&& value) {
    m_nextTokenHasBeenSet = true;
    m_nextToken = std::forward<NextTokenT>(value);
  }
  template <typename NextTokenT = Aws::String>
  ListEmailIdentityCertificatesRequest& WithNextToken(NextTokenT&& value) {
    SetNextToken(std::forward<NextTokenT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The number of results to show in a single call to
   * <code>ListEmailIdentityCertificates</code>. If the number of results is larger
   * than the number you specified in this parameter, then the response includes a
   * <code>NextToken</code> element, which you can use to obtain additional
   * results.</p>
   */
  inline int GetPageSize() const { return m_pageSize; }
  inline bool PageSizeHasBeenSet() const { return m_pageSizeHasBeenSet; }
  inline void SetPageSize(int value) {
    m_pageSizeHasBeenSet = true;
    m_pageSize = value;
  }
  inline ListEmailIdentityCertificatesRequest& WithPageSize(int value) {
    SetPageSize(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_emailIdentity;

  Aws::String m_nextToken;

  int m_pageSize{0};
  bool m_emailIdentityHasBeenSet = false;
  bool m_nextTokenHasBeenSet = false;
  bool m_pageSizeHasBeenSet = false;
};

}  // namespace Model
}  // namespace SESV2
}  // namespace Aws

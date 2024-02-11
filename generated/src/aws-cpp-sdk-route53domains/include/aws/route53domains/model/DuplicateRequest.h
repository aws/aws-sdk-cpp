/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/route53domains/Route53Domains_EXPORTS.h>
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
namespace Route53Domains
{
namespace Model
{

  /**
   * <p>The request is already in progress for the domain.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/route53domains-2014-05-15/DuplicateRequest">AWS
   * API Reference</a></p>
   */
  class DuplicateRequest
  {
  public:
    AWS_ROUTE53DOMAINS_API DuplicateRequest();
    AWS_ROUTE53DOMAINS_API DuplicateRequest(Aws::Utils::Json::JsonView jsonValue);
    AWS_ROUTE53DOMAINS_API DuplicateRequest& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ROUTE53DOMAINS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>ID of the request operation.</p>
     */
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    /**
     * <p>ID of the request operation.</p>
     */
    inline bool RequestIdHasBeenSet() const { return m_requestIdHasBeenSet; }

    /**
     * <p>ID of the request operation.</p>
     */
    inline void SetRequestId(const Aws::String& value) { m_requestIdHasBeenSet = true; m_requestId = value; }

    /**
     * <p>ID of the request operation.</p>
     */
    inline void SetRequestId(Aws::String&& value) { m_requestIdHasBeenSet = true; m_requestId = std::move(value); }

    /**
     * <p>ID of the request operation.</p>
     */
    inline void SetRequestId(const char* value) { m_requestIdHasBeenSet = true; m_requestId.assign(value); }

    /**
     * <p>ID of the request operation.</p>
     */
    inline DuplicateRequest& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    /**
     * <p>ID of the request operation.</p>
     */
    inline DuplicateRequest& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    /**
     * <p>ID of the request operation.</p>
     */
    inline DuplicateRequest& WithRequestId(const char* value) { SetRequestId(value); return *this;}


    /**
     * <p>The request is already in progress for the domain.</p>
     */
    inline const Aws::String& GetMessage() const{ return m_message; }

    /**
     * <p>The request is already in progress for the domain.</p>
     */
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }

    /**
     * <p>The request is already in progress for the domain.</p>
     */
    inline void SetMessage(const Aws::String& value) { m_messageHasBeenSet = true; m_message = value; }

    /**
     * <p>The request is already in progress for the domain.</p>
     */
    inline void SetMessage(Aws::String&& value) { m_messageHasBeenSet = true; m_message = std::move(value); }

    /**
     * <p>The request is already in progress for the domain.</p>
     */
    inline void SetMessage(const char* value) { m_messageHasBeenSet = true; m_message.assign(value); }

    /**
     * <p>The request is already in progress for the domain.</p>
     */
    inline DuplicateRequest& WithMessage(const Aws::String& value) { SetMessage(value); return *this;}

    /**
     * <p>The request is already in progress for the domain.</p>
     */
    inline DuplicateRequest& WithMessage(Aws::String&& value) { SetMessage(std::move(value)); return *this;}

    /**
     * <p>The request is already in progress for the domain.</p>
     */
    inline DuplicateRequest& WithMessage(const char* value) { SetMessage(value); return *this;}

  private:

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;

    Aws::String m_message;
    bool m_messageHasBeenSet = false;
  };

} // namespace Model
} // namespace Route53Domains
} // namespace Aws

/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/organizations/Organizations_EXPORTS.h>
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
namespace Organizations
{
namespace Model
{

  /**
   * <p>You have sent too many requests in too short a period of time. The quota
   * helps protect against denial-of-service attacks. Try again later.</p> <p>For
   * information about quotas that affect Organizations, see <a
   * href="https://docs.aws.amazon.com/organizations/latest/userguide/orgs_reference_limits.html">Quotas
   * for Organizations</a>in the <i>Organizations User Guide.</i> </p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/organizations-2016-11-28/TooManyRequestsException">AWS
   * API Reference</a></p>
   */
  class TooManyRequestsException
  {
  public:
    AWS_ORGANIZATIONS_API TooManyRequestsException();
    AWS_ORGANIZATIONS_API TooManyRequestsException(Aws::Utils::Json::JsonView jsonValue);
    AWS_ORGANIZATIONS_API TooManyRequestsException& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ORGANIZATIONS_API Aws::Utils::Json::JsonValue Jsonize() const;


    
    inline const Aws::String& GetType() const{ return m_type; }

    
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    
    inline void SetType(const Aws::String& value) { m_typeHasBeenSet = true; m_type = value; }

    
    inline void SetType(Aws::String&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    
    inline void SetType(const char* value) { m_typeHasBeenSet = true; m_type.assign(value); }

    
    inline TooManyRequestsException& WithType(const Aws::String& value) { SetType(value); return *this;}

    
    inline TooManyRequestsException& WithType(Aws::String&& value) { SetType(std::move(value)); return *this;}

    
    inline TooManyRequestsException& WithType(const char* value) { SetType(value); return *this;}


    
    inline const Aws::String& GetMessage() const{ return m_message; }

    
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }

    
    inline void SetMessage(const Aws::String& value) { m_messageHasBeenSet = true; m_message = value; }

    
    inline void SetMessage(Aws::String&& value) { m_messageHasBeenSet = true; m_message = std::move(value); }

    
    inline void SetMessage(const char* value) { m_messageHasBeenSet = true; m_message.assign(value); }

    
    inline TooManyRequestsException& WithMessage(const Aws::String& value) { SetMessage(value); return *this;}

    
    inline TooManyRequestsException& WithMessage(Aws::String&& value) { SetMessage(std::move(value)); return *this;}

    
    inline TooManyRequestsException& WithMessage(const char* value) { SetMessage(value); return *this;}

  private:

    Aws::String m_type;
    bool m_typeHasBeenSet = false;

    Aws::String m_message;
    bool m_messageHasBeenSet = false;
  };

} // namespace Model
} // namespace Organizations
} // namespace Aws

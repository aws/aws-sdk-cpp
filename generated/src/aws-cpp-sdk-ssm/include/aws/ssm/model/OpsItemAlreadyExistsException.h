/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm/SSM_EXPORTS.h>
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
namespace SSM
{
namespace Model
{

  /**
   * <p>The OpsItem already exists.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/OpsItemAlreadyExistsException">AWS
   * API Reference</a></p>
   */
  class OpsItemAlreadyExistsException
  {
  public:
    AWS_SSM_API OpsItemAlreadyExistsException();
    AWS_SSM_API OpsItemAlreadyExistsException(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSM_API OpsItemAlreadyExistsException& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSM_API Aws::Utils::Json::JsonValue Jsonize() const;


    
    inline const Aws::String& GetMessage() const{ return m_message; }

    
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }

    
    inline void SetMessage(const Aws::String& value) { m_messageHasBeenSet = true; m_message = value; }

    
    inline void SetMessage(Aws::String&& value) { m_messageHasBeenSet = true; m_message = std::move(value); }

    
    inline void SetMessage(const char* value) { m_messageHasBeenSet = true; m_message.assign(value); }

    
    inline OpsItemAlreadyExistsException& WithMessage(const Aws::String& value) { SetMessage(value); return *this;}

    
    inline OpsItemAlreadyExistsException& WithMessage(Aws::String&& value) { SetMessage(std::move(value)); return *this;}

    
    inline OpsItemAlreadyExistsException& WithMessage(const char* value) { SetMessage(value); return *this;}


    
    inline const Aws::String& GetOpsItemId() const{ return m_opsItemId; }

    
    inline bool OpsItemIdHasBeenSet() const { return m_opsItemIdHasBeenSet; }

    
    inline void SetOpsItemId(const Aws::String& value) { m_opsItemIdHasBeenSet = true; m_opsItemId = value; }

    
    inline void SetOpsItemId(Aws::String&& value) { m_opsItemIdHasBeenSet = true; m_opsItemId = std::move(value); }

    
    inline void SetOpsItemId(const char* value) { m_opsItemIdHasBeenSet = true; m_opsItemId.assign(value); }

    
    inline OpsItemAlreadyExistsException& WithOpsItemId(const Aws::String& value) { SetOpsItemId(value); return *this;}

    
    inline OpsItemAlreadyExistsException& WithOpsItemId(Aws::String&& value) { SetOpsItemId(std::move(value)); return *this;}

    
    inline OpsItemAlreadyExistsException& WithOpsItemId(const char* value) { SetOpsItemId(value); return *this;}

  private:

    Aws::String m_message;
    bool m_messageHasBeenSet = false;

    Aws::String m_opsItemId;
    bool m_opsItemIdHasBeenSet = false;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws

/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/route53-recovery-cluster/Route53RecoveryCluster_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/route53-recovery-cluster/model/ValidationExceptionReason.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/route53-recovery-cluster/model/ValidationExceptionField.h>
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
namespace Route53RecoveryCluster
{
namespace Model
{

  /**
   * <p>There was a validation error on the request.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/route53-recovery-cluster-2019-12-02/ValidationException">AWS
   * API Reference</a></p>
   */
  class ValidationException
  {
  public:
    AWS_ROUTE53RECOVERYCLUSTER_API ValidationException();
    AWS_ROUTE53RECOVERYCLUSTER_API ValidationException(Aws::Utils::Json::JsonView jsonValue);
    AWS_ROUTE53RECOVERYCLUSTER_API ValidationException& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ROUTE53RECOVERYCLUSTER_API Aws::Utils::Json::JsonValue Jsonize() const;


    
    inline const Aws::String& GetMessage() const{ return m_message; }

    
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }

    
    inline void SetMessage(const Aws::String& value) { m_messageHasBeenSet = true; m_message = value; }

    
    inline void SetMessage(Aws::String&& value) { m_messageHasBeenSet = true; m_message = std::move(value); }

    
    inline void SetMessage(const char* value) { m_messageHasBeenSet = true; m_message.assign(value); }

    
    inline ValidationException& WithMessage(const Aws::String& value) { SetMessage(value); return *this;}

    
    inline ValidationException& WithMessage(Aws::String&& value) { SetMessage(std::move(value)); return *this;}

    
    inline ValidationException& WithMessage(const char* value) { SetMessage(value); return *this;}


    
    inline const ValidationExceptionReason& GetReason() const{ return m_reason; }

    
    inline bool ReasonHasBeenSet() const { return m_reasonHasBeenSet; }

    
    inline void SetReason(const ValidationExceptionReason& value) { m_reasonHasBeenSet = true; m_reason = value; }

    
    inline void SetReason(ValidationExceptionReason&& value) { m_reasonHasBeenSet = true; m_reason = std::move(value); }

    
    inline ValidationException& WithReason(const ValidationExceptionReason& value) { SetReason(value); return *this;}

    
    inline ValidationException& WithReason(ValidationExceptionReason&& value) { SetReason(std::move(value)); return *this;}


    
    inline const Aws::Vector<ValidationExceptionField>& GetFields() const{ return m_fields; }

    
    inline bool FieldsHasBeenSet() const { return m_fieldsHasBeenSet; }

    
    inline void SetFields(const Aws::Vector<ValidationExceptionField>& value) { m_fieldsHasBeenSet = true; m_fields = value; }

    
    inline void SetFields(Aws::Vector<ValidationExceptionField>&& value) { m_fieldsHasBeenSet = true; m_fields = std::move(value); }

    
    inline ValidationException& WithFields(const Aws::Vector<ValidationExceptionField>& value) { SetFields(value); return *this;}

    
    inline ValidationException& WithFields(Aws::Vector<ValidationExceptionField>&& value) { SetFields(std::move(value)); return *this;}

    
    inline ValidationException& AddFields(const ValidationExceptionField& value) { m_fieldsHasBeenSet = true; m_fields.push_back(value); return *this; }

    
    inline ValidationException& AddFields(ValidationExceptionField&& value) { m_fieldsHasBeenSet = true; m_fields.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_message;
    bool m_messageHasBeenSet = false;

    ValidationExceptionReason m_reason;
    bool m_reasonHasBeenSet = false;

    Aws::Vector<ValidationExceptionField> m_fields;
    bool m_fieldsHasBeenSet = false;
  };

} // namespace Model
} // namespace Route53RecoveryCluster
} // namespace Aws

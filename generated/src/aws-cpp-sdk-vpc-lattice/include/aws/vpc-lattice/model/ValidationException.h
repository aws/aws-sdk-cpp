/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/vpc-lattice/VPCLattice_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/vpc-lattice/model/ValidationExceptionReason.h>
#include <aws/vpc-lattice/model/ValidationExceptionField.h>
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
namespace VPCLattice
{
namespace Model
{

  /**
   * <p>The input does not satisfy the constraints specified by an Amazon Web
   * Services service.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/vpc-lattice-2022-11-30/ValidationException">AWS
   * API Reference</a></p>
   */
  class ValidationException
  {
  public:
    AWS_VPCLATTICE_API ValidationException();
    AWS_VPCLATTICE_API ValidationException(Aws::Utils::Json::JsonView jsonValue);
    AWS_VPCLATTICE_API ValidationException& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_VPCLATTICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The fields that failed validation.</p>
     */
    inline const Aws::Vector<ValidationExceptionField>& GetFieldList() const{ return m_fieldList; }

    /**
     * <p>The fields that failed validation.</p>
     */
    inline bool FieldListHasBeenSet() const { return m_fieldListHasBeenSet; }

    /**
     * <p>The fields that failed validation.</p>
     */
    inline void SetFieldList(const Aws::Vector<ValidationExceptionField>& value) { m_fieldListHasBeenSet = true; m_fieldList = value; }

    /**
     * <p>The fields that failed validation.</p>
     */
    inline void SetFieldList(Aws::Vector<ValidationExceptionField>&& value) { m_fieldListHasBeenSet = true; m_fieldList = std::move(value); }

    /**
     * <p>The fields that failed validation.</p>
     */
    inline ValidationException& WithFieldList(const Aws::Vector<ValidationExceptionField>& value) { SetFieldList(value); return *this;}

    /**
     * <p>The fields that failed validation.</p>
     */
    inline ValidationException& WithFieldList(Aws::Vector<ValidationExceptionField>&& value) { SetFieldList(std::move(value)); return *this;}

    /**
     * <p>The fields that failed validation.</p>
     */
    inline ValidationException& AddFieldList(const ValidationExceptionField& value) { m_fieldListHasBeenSet = true; m_fieldList.push_back(value); return *this; }

    /**
     * <p>The fields that failed validation.</p>
     */
    inline ValidationException& AddFieldList(ValidationExceptionField&& value) { m_fieldListHasBeenSet = true; m_fieldList.push_back(std::move(value)); return *this; }


    
    inline const Aws::String& GetMessage() const{ return m_message; }

    
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }

    
    inline void SetMessage(const Aws::String& value) { m_messageHasBeenSet = true; m_message = value; }

    
    inline void SetMessage(Aws::String&& value) { m_messageHasBeenSet = true; m_message = std::move(value); }

    
    inline void SetMessage(const char* value) { m_messageHasBeenSet = true; m_message.assign(value); }

    
    inline ValidationException& WithMessage(const Aws::String& value) { SetMessage(value); return *this;}

    
    inline ValidationException& WithMessage(Aws::String&& value) { SetMessage(std::move(value)); return *this;}

    
    inline ValidationException& WithMessage(const char* value) { SetMessage(value); return *this;}


    /**
     * <p>The reason.</p>
     */
    inline const ValidationExceptionReason& GetReason() const{ return m_reason; }

    /**
     * <p>The reason.</p>
     */
    inline bool ReasonHasBeenSet() const { return m_reasonHasBeenSet; }

    /**
     * <p>The reason.</p>
     */
    inline void SetReason(const ValidationExceptionReason& value) { m_reasonHasBeenSet = true; m_reason = value; }

    /**
     * <p>The reason.</p>
     */
    inline void SetReason(ValidationExceptionReason&& value) { m_reasonHasBeenSet = true; m_reason = std::move(value); }

    /**
     * <p>The reason.</p>
     */
    inline ValidationException& WithReason(const ValidationExceptionReason& value) { SetReason(value); return *this;}

    /**
     * <p>The reason.</p>
     */
    inline ValidationException& WithReason(ValidationExceptionReason&& value) { SetReason(std::move(value)); return *this;}

  private:

    Aws::Vector<ValidationExceptionField> m_fieldList;
    bool m_fieldListHasBeenSet = false;

    Aws::String m_message;
    bool m_messageHasBeenSet = false;

    ValidationExceptionReason m_reason;
    bool m_reasonHasBeenSet = false;
  };

} // namespace Model
} // namespace VPCLattice
} // namespace Aws

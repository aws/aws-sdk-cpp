/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/route53-recovery-cluster/Route53RecoveryCluster_EXPORTS.h>
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
namespace Route53RecoveryCluster
{
namespace Model
{

  /**
   * <p>There was a validation error on the request.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/route53-recovery-cluster-2019-12-02/ValidationExceptionField">AWS
   * API Reference</a></p>
   */
  class ValidationExceptionField
  {
  public:
    AWS_ROUTE53RECOVERYCLUSTER_API ValidationExceptionField();
    AWS_ROUTE53RECOVERYCLUSTER_API ValidationExceptionField(Aws::Utils::Json::JsonView jsonValue);
    AWS_ROUTE53RECOVERYCLUSTER_API ValidationExceptionField& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ROUTE53RECOVERYCLUSTER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The field that had the validation exception.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The field that had the validation exception.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The field that had the validation exception.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The field that had the validation exception.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The field that had the validation exception.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The field that had the validation exception.</p>
     */
    inline ValidationExceptionField& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The field that had the validation exception.</p>
     */
    inline ValidationExceptionField& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The field that had the validation exception.</p>
     */
    inline ValidationExceptionField& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>Information about the validation exception.</p>
     */
    inline const Aws::String& GetMessage() const{ return m_message; }

    /**
     * <p>Information about the validation exception.</p>
     */
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }

    /**
     * <p>Information about the validation exception.</p>
     */
    inline void SetMessage(const Aws::String& value) { m_messageHasBeenSet = true; m_message = value; }

    /**
     * <p>Information about the validation exception.</p>
     */
    inline void SetMessage(Aws::String&& value) { m_messageHasBeenSet = true; m_message = std::move(value); }

    /**
     * <p>Information about the validation exception.</p>
     */
    inline void SetMessage(const char* value) { m_messageHasBeenSet = true; m_message.assign(value); }

    /**
     * <p>Information about the validation exception.</p>
     */
    inline ValidationExceptionField& WithMessage(const Aws::String& value) { SetMessage(value); return *this;}

    /**
     * <p>Information about the validation exception.</p>
     */
    inline ValidationExceptionField& WithMessage(Aws::String&& value) { SetMessage(std::move(value)); return *this;}

    /**
     * <p>Information about the validation exception.</p>
     */
    inline ValidationExceptionField& WithMessage(const char* value) { SetMessage(value); return *this;}

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_message;
    bool m_messageHasBeenSet = false;
  };

} // namespace Model
} // namespace Route53RecoveryCluster
} // namespace Aws

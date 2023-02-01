/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/managedblockchain/ManagedBlockchain_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/managedblockchain/model/AccessorType.h>
#include <aws/managedblockchain/model/AccessorStatus.h>
#include <aws/core/utils/DateTime.h>
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
namespace ManagedBlockchain
{
namespace Model
{

  /**
   *  <p>The token based access feature is in preview release for Ethereum
   * on Amazon Managed Blockchain and is subject to change. We recommend that you use
   * this feature only with test scenarios, and not in production environments.</p>
   *  <p>A summary of accessor properties.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/managedblockchain-2018-09-24/AccessorSummary">AWS
   * API Reference</a></p>
   */
  class AccessorSummary
  {
  public:
    AWS_MANAGEDBLOCKCHAIN_API AccessorSummary();
    AWS_MANAGEDBLOCKCHAIN_API AccessorSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_MANAGEDBLOCKCHAIN_API AccessorSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MANAGEDBLOCKCHAIN_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The unique identifier of the accessor.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p>The unique identifier of the accessor.</p>
     */
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }

    /**
     * <p>The unique identifier of the accessor.</p>
     */
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * <p>The unique identifier of the accessor.</p>
     */
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }

    /**
     * <p>The unique identifier of the accessor.</p>
     */
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }

    /**
     * <p>The unique identifier of the accessor.</p>
     */
    inline AccessorSummary& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p>The unique identifier of the accessor.</p>
     */
    inline AccessorSummary& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier of the accessor.</p>
     */
    inline AccessorSummary& WithId(const char* value) { SetId(value); return *this;}


    /**
     * <p>The type of the accessor.</p>  <p>Currently accessor type is restricted
     * to <code>BILLING_TOKEN</code>.</p> 
     */
    inline const AccessorType& GetType() const{ return m_type; }

    /**
     * <p>The type of the accessor.</p>  <p>Currently accessor type is restricted
     * to <code>BILLING_TOKEN</code>.</p> 
     */
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    /**
     * <p>The type of the accessor.</p>  <p>Currently accessor type is restricted
     * to <code>BILLING_TOKEN</code>.</p> 
     */
    inline void SetType(const AccessorType& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>The type of the accessor.</p>  <p>Currently accessor type is restricted
     * to <code>BILLING_TOKEN</code>.</p> 
     */
    inline void SetType(AccessorType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p>The type of the accessor.</p>  <p>Currently accessor type is restricted
     * to <code>BILLING_TOKEN</code>.</p> 
     */
    inline AccessorSummary& WithType(const AccessorType& value) { SetType(value); return *this;}

    /**
     * <p>The type of the accessor.</p>  <p>Currently accessor type is restricted
     * to <code>BILLING_TOKEN</code>.</p> 
     */
    inline AccessorSummary& WithType(AccessorType&& value) { SetType(std::move(value)); return *this;}


    /**
     * <p>The current status of the accessor.</p>
     */
    inline const AccessorStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The current status of the accessor.</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>The current status of the accessor.</p>
     */
    inline void SetStatus(const AccessorStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The current status of the accessor.</p>
     */
    inline void SetStatus(AccessorStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The current status of the accessor.</p>
     */
    inline AccessorSummary& WithStatus(const AccessorStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The current status of the accessor.</p>
     */
    inline AccessorSummary& WithStatus(AccessorStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>The creation date and time of the accessor.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationDate() const{ return m_creationDate; }

    /**
     * <p>The creation date and time of the accessor.</p>
     */
    inline bool CreationDateHasBeenSet() const { return m_creationDateHasBeenSet; }

    /**
     * <p>The creation date and time of the accessor.</p>
     */
    inline void SetCreationDate(const Aws::Utils::DateTime& value) { m_creationDateHasBeenSet = true; m_creationDate = value; }

    /**
     * <p>The creation date and time of the accessor.</p>
     */
    inline void SetCreationDate(Aws::Utils::DateTime&& value) { m_creationDateHasBeenSet = true; m_creationDate = std::move(value); }

    /**
     * <p>The creation date and time of the accessor.</p>
     */
    inline AccessorSummary& WithCreationDate(const Aws::Utils::DateTime& value) { SetCreationDate(value); return *this;}

    /**
     * <p>The creation date and time of the accessor.</p>
     */
    inline AccessorSummary& WithCreationDate(Aws::Utils::DateTime&& value) { SetCreationDate(std::move(value)); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the accessor. For more information about
     * ARNs and their format, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resource Names (ARNs)</a> in the <i>Amazon Web Services General
     * Reference</i>.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the accessor. For more information about
     * ARNs and their format, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resource Names (ARNs)</a> in the <i>Amazon Web Services General
     * Reference</i>.</p>
     */
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the accessor. For more information about
     * ARNs and their format, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resource Names (ARNs)</a> in the <i>Amazon Web Services General
     * Reference</i>.</p>
     */
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the accessor. For more information about
     * ARNs and their format, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resource Names (ARNs)</a> in the <i>Amazon Web Services General
     * Reference</i>.</p>
     */
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the accessor. For more information about
     * ARNs and their format, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resource Names (ARNs)</a> in the <i>Amazon Web Services General
     * Reference</i>.</p>
     */
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the accessor. For more information about
     * ARNs and their format, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resource Names (ARNs)</a> in the <i>Amazon Web Services General
     * Reference</i>.</p>
     */
    inline AccessorSummary& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the accessor. For more information about
     * ARNs and their format, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resource Names (ARNs)</a> in the <i>Amazon Web Services General
     * Reference</i>.</p>
     */
    inline AccessorSummary& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the accessor. For more information about
     * ARNs and their format, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resource Names (ARNs)</a> in the <i>Amazon Web Services General
     * Reference</i>.</p>
     */
    inline AccessorSummary& WithArn(const char* value) { SetArn(value); return *this;}

  private:

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    AccessorType m_type;
    bool m_typeHasBeenSet = false;

    AccessorStatus m_status;
    bool m_statusHasBeenSet = false;

    Aws::Utils::DateTime m_creationDate;
    bool m_creationDateHasBeenSet = false;

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;
  };

} // namespace Model
} // namespace ManagedBlockchain
} // namespace Aws

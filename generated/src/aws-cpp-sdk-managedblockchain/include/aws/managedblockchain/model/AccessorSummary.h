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
#include <aws/managedblockchain/model/AccessorNetworkType.h>
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
   * <p>A summary of accessor properties.</p><p><h3>See Also:</h3>   <a
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


    ///@{
    /**
     * <p>The unique identifier of the accessor.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }
    inline AccessorSummary& WithId(const Aws::String& value) { SetId(value); return *this;}
    inline AccessorSummary& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}
    inline AccessorSummary& WithId(const char* value) { SetId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of the accessor.</p>  <p>Currently accessor type is restricted
     * to <code>BILLING_TOKEN</code>.</p> 
     */
    inline const AccessorType& GetType() const{ return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(const AccessorType& value) { m_typeHasBeenSet = true; m_type = value; }
    inline void SetType(AccessorType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }
    inline AccessorSummary& WithType(const AccessorType& value) { SetType(value); return *this;}
    inline AccessorSummary& WithType(AccessorType&& value) { SetType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current status of the accessor.</p>
     */
    inline const AccessorStatus& GetStatus() const{ return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(const AccessorStatus& value) { m_statusHasBeenSet = true; m_status = value; }
    inline void SetStatus(AccessorStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }
    inline AccessorSummary& WithStatus(const AccessorStatus& value) { SetStatus(value); return *this;}
    inline AccessorSummary& WithStatus(AccessorStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The creation date and time of the accessor.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationDate() const{ return m_creationDate; }
    inline bool CreationDateHasBeenSet() const { return m_creationDateHasBeenSet; }
    inline void SetCreationDate(const Aws::Utils::DateTime& value) { m_creationDateHasBeenSet = true; m_creationDate = value; }
    inline void SetCreationDate(Aws::Utils::DateTime&& value) { m_creationDateHasBeenSet = true; m_creationDate = std::move(value); }
    inline AccessorSummary& WithCreationDate(const Aws::Utils::DateTime& value) { SetCreationDate(value); return *this;}
    inline AccessorSummary& WithCreationDate(Aws::Utils::DateTime&& value) { SetCreationDate(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the accessor. For more information about
     * ARNs and their format, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resource Names (ARNs)</a> in the <i>Amazon Web Services General
     * Reference</i>.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }
    inline AccessorSummary& WithArn(const Aws::String& value) { SetArn(value); return *this;}
    inline AccessorSummary& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}
    inline AccessorSummary& WithArn(const char* value) { SetArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The blockchain network that the Accessor token is created for.</p>
     */
    inline const AccessorNetworkType& GetNetworkType() const{ return m_networkType; }
    inline bool NetworkTypeHasBeenSet() const { return m_networkTypeHasBeenSet; }
    inline void SetNetworkType(const AccessorNetworkType& value) { m_networkTypeHasBeenSet = true; m_networkType = value; }
    inline void SetNetworkType(AccessorNetworkType&& value) { m_networkTypeHasBeenSet = true; m_networkType = std::move(value); }
    inline AccessorSummary& WithNetworkType(const AccessorNetworkType& value) { SetNetworkType(value); return *this;}
    inline AccessorSummary& WithNetworkType(AccessorNetworkType&& value) { SetNetworkType(std::move(value)); return *this;}
    ///@}
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

    AccessorNetworkType m_networkType;
    bool m_networkTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace ManagedBlockchain
} // namespace Aws

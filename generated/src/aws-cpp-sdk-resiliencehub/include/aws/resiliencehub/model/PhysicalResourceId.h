/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/resiliencehub/ResilienceHub_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/resiliencehub/model/PhysicalIdentifierType.h>
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
namespace ResilienceHub
{
namespace Model
{

  /**
   * <p>Defines a physical resource identifier.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/resiliencehub-2020-04-30/PhysicalResourceId">AWS
   * API Reference</a></p>
   */
  class PhysicalResourceId
  {
  public:
    AWS_RESILIENCEHUB_API PhysicalResourceId();
    AWS_RESILIENCEHUB_API PhysicalResourceId(Aws::Utils::Json::JsonView jsonValue);
    AWS_RESILIENCEHUB_API PhysicalResourceId& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_RESILIENCEHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The Amazon Web Services account that owns the physical resource.</p>
     */
    inline const Aws::String& GetAwsAccountId() const{ return m_awsAccountId; }

    /**
     * <p>The Amazon Web Services account that owns the physical resource.</p>
     */
    inline bool AwsAccountIdHasBeenSet() const { return m_awsAccountIdHasBeenSet; }

    /**
     * <p>The Amazon Web Services account that owns the physical resource.</p>
     */
    inline void SetAwsAccountId(const Aws::String& value) { m_awsAccountIdHasBeenSet = true; m_awsAccountId = value; }

    /**
     * <p>The Amazon Web Services account that owns the physical resource.</p>
     */
    inline void SetAwsAccountId(Aws::String&& value) { m_awsAccountIdHasBeenSet = true; m_awsAccountId = std::move(value); }

    /**
     * <p>The Amazon Web Services account that owns the physical resource.</p>
     */
    inline void SetAwsAccountId(const char* value) { m_awsAccountIdHasBeenSet = true; m_awsAccountId.assign(value); }

    /**
     * <p>The Amazon Web Services account that owns the physical resource.</p>
     */
    inline PhysicalResourceId& WithAwsAccountId(const Aws::String& value) { SetAwsAccountId(value); return *this;}

    /**
     * <p>The Amazon Web Services account that owns the physical resource.</p>
     */
    inline PhysicalResourceId& WithAwsAccountId(Aws::String&& value) { SetAwsAccountId(std::move(value)); return *this;}

    /**
     * <p>The Amazon Web Services account that owns the physical resource.</p>
     */
    inline PhysicalResourceId& WithAwsAccountId(const char* value) { SetAwsAccountId(value); return *this;}


    /**
     * <p>The Amazon Web Services Region that the physical resource is located in.</p>
     */
    inline const Aws::String& GetAwsRegion() const{ return m_awsRegion; }

    /**
     * <p>The Amazon Web Services Region that the physical resource is located in.</p>
     */
    inline bool AwsRegionHasBeenSet() const { return m_awsRegionHasBeenSet; }

    /**
     * <p>The Amazon Web Services Region that the physical resource is located in.</p>
     */
    inline void SetAwsRegion(const Aws::String& value) { m_awsRegionHasBeenSet = true; m_awsRegion = value; }

    /**
     * <p>The Amazon Web Services Region that the physical resource is located in.</p>
     */
    inline void SetAwsRegion(Aws::String&& value) { m_awsRegionHasBeenSet = true; m_awsRegion = std::move(value); }

    /**
     * <p>The Amazon Web Services Region that the physical resource is located in.</p>
     */
    inline void SetAwsRegion(const char* value) { m_awsRegionHasBeenSet = true; m_awsRegion.assign(value); }

    /**
     * <p>The Amazon Web Services Region that the physical resource is located in.</p>
     */
    inline PhysicalResourceId& WithAwsRegion(const Aws::String& value) { SetAwsRegion(value); return *this;}

    /**
     * <p>The Amazon Web Services Region that the physical resource is located in.</p>
     */
    inline PhysicalResourceId& WithAwsRegion(Aws::String&& value) { SetAwsRegion(std::move(value)); return *this;}

    /**
     * <p>The Amazon Web Services Region that the physical resource is located in.</p>
     */
    inline PhysicalResourceId& WithAwsRegion(const char* value) { SetAwsRegion(value); return *this;}


    /**
     * <p>The identifier of the physical resource.</p>
     */
    inline const Aws::String& GetIdentifier() const{ return m_identifier; }

    /**
     * <p>The identifier of the physical resource.</p>
     */
    inline bool IdentifierHasBeenSet() const { return m_identifierHasBeenSet; }

    /**
     * <p>The identifier of the physical resource.</p>
     */
    inline void SetIdentifier(const Aws::String& value) { m_identifierHasBeenSet = true; m_identifier = value; }

    /**
     * <p>The identifier of the physical resource.</p>
     */
    inline void SetIdentifier(Aws::String&& value) { m_identifierHasBeenSet = true; m_identifier = std::move(value); }

    /**
     * <p>The identifier of the physical resource.</p>
     */
    inline void SetIdentifier(const char* value) { m_identifierHasBeenSet = true; m_identifier.assign(value); }

    /**
     * <p>The identifier of the physical resource.</p>
     */
    inline PhysicalResourceId& WithIdentifier(const Aws::String& value) { SetIdentifier(value); return *this;}

    /**
     * <p>The identifier of the physical resource.</p>
     */
    inline PhysicalResourceId& WithIdentifier(Aws::String&& value) { SetIdentifier(std::move(value)); return *this;}

    /**
     * <p>The identifier of the physical resource.</p>
     */
    inline PhysicalResourceId& WithIdentifier(const char* value) { SetIdentifier(value); return *this;}


    /**
     * <p>Specifies the type of physical resource identifier.</p> <dl> <dt>Arn</dt>
     * <dd> <p>The resource identifier is an Amazon Resource Name (ARN) .</p> </dd>
     * <dt>Native</dt> <dd> <p>The resource identifier is a Resilience Hub-native
     * identifier.</p> </dd> </dl>
     */
    inline const PhysicalIdentifierType& GetType() const{ return m_type; }

    /**
     * <p>Specifies the type of physical resource identifier.</p> <dl> <dt>Arn</dt>
     * <dd> <p>The resource identifier is an Amazon Resource Name (ARN) .</p> </dd>
     * <dt>Native</dt> <dd> <p>The resource identifier is a Resilience Hub-native
     * identifier.</p> </dd> </dl>
     */
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    /**
     * <p>Specifies the type of physical resource identifier.</p> <dl> <dt>Arn</dt>
     * <dd> <p>The resource identifier is an Amazon Resource Name (ARN) .</p> </dd>
     * <dt>Native</dt> <dd> <p>The resource identifier is a Resilience Hub-native
     * identifier.</p> </dd> </dl>
     */
    inline void SetType(const PhysicalIdentifierType& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>Specifies the type of physical resource identifier.</p> <dl> <dt>Arn</dt>
     * <dd> <p>The resource identifier is an Amazon Resource Name (ARN) .</p> </dd>
     * <dt>Native</dt> <dd> <p>The resource identifier is a Resilience Hub-native
     * identifier.</p> </dd> </dl>
     */
    inline void SetType(PhysicalIdentifierType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p>Specifies the type of physical resource identifier.</p> <dl> <dt>Arn</dt>
     * <dd> <p>The resource identifier is an Amazon Resource Name (ARN) .</p> </dd>
     * <dt>Native</dt> <dd> <p>The resource identifier is a Resilience Hub-native
     * identifier.</p> </dd> </dl>
     */
    inline PhysicalResourceId& WithType(const PhysicalIdentifierType& value) { SetType(value); return *this;}

    /**
     * <p>Specifies the type of physical resource identifier.</p> <dl> <dt>Arn</dt>
     * <dd> <p>The resource identifier is an Amazon Resource Name (ARN) .</p> </dd>
     * <dt>Native</dt> <dd> <p>The resource identifier is a Resilience Hub-native
     * identifier.</p> </dd> </dl>
     */
    inline PhysicalResourceId& WithType(PhysicalIdentifierType&& value) { SetType(std::move(value)); return *this;}

  private:

    Aws::String m_awsAccountId;
    bool m_awsAccountIdHasBeenSet = false;

    Aws::String m_awsRegion;
    bool m_awsRegionHasBeenSet = false;

    Aws::String m_identifier;
    bool m_identifierHasBeenSet = false;

    PhysicalIdentifierType m_type;
    bool m_typeHasBeenSet = false;
  };

} // namespace Model
} // namespace ResilienceHub
} // namespace Aws

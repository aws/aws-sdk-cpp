/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/redshift-serverless/RedshiftServerless_EXPORTS.h>
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
namespace RedshiftServerless
{
namespace Model
{

  /**
   * <p>Contains names of objects associated with a scheduled action.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/redshift-serverless-2021-04-21/ScheduledActionAssociation">AWS
   * API Reference</a></p>
   */
  class ScheduledActionAssociation
  {
  public:
    AWS_REDSHIFTSERVERLESS_API ScheduledActionAssociation();
    AWS_REDSHIFTSERVERLESS_API ScheduledActionAssociation(Aws::Utils::Json::JsonView jsonValue);
    AWS_REDSHIFTSERVERLESS_API ScheduledActionAssociation& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_REDSHIFTSERVERLESS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Name of associated Amazon Redshift Serverless namespace.</p>
     */
    inline const Aws::String& GetNamespaceName() const{ return m_namespaceName; }

    /**
     * <p>Name of associated Amazon Redshift Serverless namespace.</p>
     */
    inline bool NamespaceNameHasBeenSet() const { return m_namespaceNameHasBeenSet; }

    /**
     * <p>Name of associated Amazon Redshift Serverless namespace.</p>
     */
    inline void SetNamespaceName(const Aws::String& value) { m_namespaceNameHasBeenSet = true; m_namespaceName = value; }

    /**
     * <p>Name of associated Amazon Redshift Serverless namespace.</p>
     */
    inline void SetNamespaceName(Aws::String&& value) { m_namespaceNameHasBeenSet = true; m_namespaceName = std::move(value); }

    /**
     * <p>Name of associated Amazon Redshift Serverless namespace.</p>
     */
    inline void SetNamespaceName(const char* value) { m_namespaceNameHasBeenSet = true; m_namespaceName.assign(value); }

    /**
     * <p>Name of associated Amazon Redshift Serverless namespace.</p>
     */
    inline ScheduledActionAssociation& WithNamespaceName(const Aws::String& value) { SetNamespaceName(value); return *this;}

    /**
     * <p>Name of associated Amazon Redshift Serverless namespace.</p>
     */
    inline ScheduledActionAssociation& WithNamespaceName(Aws::String&& value) { SetNamespaceName(std::move(value)); return *this;}

    /**
     * <p>Name of associated Amazon Redshift Serverless namespace.</p>
     */
    inline ScheduledActionAssociation& WithNamespaceName(const char* value) { SetNamespaceName(value); return *this;}


    /**
     * <p>Name of associated scheduled action.</p>
     */
    inline const Aws::String& GetScheduledActionName() const{ return m_scheduledActionName; }

    /**
     * <p>Name of associated scheduled action.</p>
     */
    inline bool ScheduledActionNameHasBeenSet() const { return m_scheduledActionNameHasBeenSet; }

    /**
     * <p>Name of associated scheduled action.</p>
     */
    inline void SetScheduledActionName(const Aws::String& value) { m_scheduledActionNameHasBeenSet = true; m_scheduledActionName = value; }

    /**
     * <p>Name of associated scheduled action.</p>
     */
    inline void SetScheduledActionName(Aws::String&& value) { m_scheduledActionNameHasBeenSet = true; m_scheduledActionName = std::move(value); }

    /**
     * <p>Name of associated scheduled action.</p>
     */
    inline void SetScheduledActionName(const char* value) { m_scheduledActionNameHasBeenSet = true; m_scheduledActionName.assign(value); }

    /**
     * <p>Name of associated scheduled action.</p>
     */
    inline ScheduledActionAssociation& WithScheduledActionName(const Aws::String& value) { SetScheduledActionName(value); return *this;}

    /**
     * <p>Name of associated scheduled action.</p>
     */
    inline ScheduledActionAssociation& WithScheduledActionName(Aws::String&& value) { SetScheduledActionName(std::move(value)); return *this;}

    /**
     * <p>Name of associated scheduled action.</p>
     */
    inline ScheduledActionAssociation& WithScheduledActionName(const char* value) { SetScheduledActionName(value); return *this;}

  private:

    Aws::String m_namespaceName;
    bool m_namespaceNameHasBeenSet = false;

    Aws::String m_scheduledActionName;
    bool m_scheduledActionNameHasBeenSet = false;
  };

} // namespace Model
} // namespace RedshiftServerless
} // namespace Aws
